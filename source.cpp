#include "pch.h"
#include "header.h"

inline void Pracownik::Login()
{
	while (1)
	{
		cout << "Podaj login : ";
		cin >> userName;
		cout << "Podaj haslo : ";
		cin >> userPass;

		if (userName == "x" && userPass == "d")
		{
			cout << "Witaj Grzegorz Studzinski!\n";
			break;
		}

		else if (userName == "janosik" && userPass == "maryna")
		{
			cout << "Witaj Michal Stawarski!\n";
			break;
		}

		else if (userName == "strazak" && userPass == "pozar")
		{
			system("cls");
			cout << "Witaj Jakub Strazak!\n";
			break;
		}

		system("cls");
		cout << "Blad w logowaniu\n";
	}
}

inline int wybierz_usluge()
{
	cout << "Menu:\n";
	cout << "[1] Rejestracja\n";
	cout << "[2] Rezerwacja\n";
	cout << "[3] Wypozyczenie\n";
	cout << "[4] Zarzadzanie sprzetem\n";
	cout << "[5] Cennik\n";
	cout << "[6] Lekcje jazdy\n";
	cout << "[0] Wyjscie z programu\n";

	int x;
	cin >> x;

	if (x > 6 || x < 0)
	{
		system("cls");
		cout << "Blad!!!\n\n";
		wybierz_usluge();
	}

	else
		return x;
}


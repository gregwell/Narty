#include "header.h"
#include "pch.h"
#include <string>

using namespace std;

void Wypozyczalnia::dodaj_rezerwacje()
{
	Data data;
	cout << "Wybierz dzień : ";
	cin >> data.dzien;
	cout << "Miesiąc: ";
	cin >> data.miesiac;
	cout << "Rok: ";
	cin >> data.rok;
}

void Pracownik::Login()
{
	while (1)
	{
		cout << "Podaj login : ";
		cin >> userName;
		cout << "Podaj hasło : ";
		cin >> userPass;


		if (userName == "greg69" && userPass == "qwerty")
		{
			cout << "Witaj Grzegorz Studziński!\n";
			break;
		}

		else if (userName == "michauu" && userPass == "ytrewq")
		{
			cout << "Witaj Michał Stawarski!\n";
			break;
		}

		else if (userName == "strazak" && userPass == "pozar")
		{
			cout << "Witaj Jakub Strazak!\n";
			break;
		}

		else
		{
			cout << "Błąd w logowaniu\n";
		}
	}
}

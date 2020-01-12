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
			cout << "Witaj Grzegorz Studzisski!\n";
			break;
		}

		else if (userName == "janosik" && userPass == "maryna")
		{
			cout << "Witaj Michal Stawarski!\n";
			break;
		}

		else if (userName == "strazak" && userPass == "pozar")
		{
			cout << "Witaj Jakub Strazak!\n";
			break;
		}

		cout << "Błąd w logowaniu\n";
	}
}

inline int wybierz_usluge()
{
	cout << "Menu:\n";
	cout << "1. Rejestracja\n";
	cout << "2. Rezerwacja\n";
	cout << "3. Wypożyczenie\n";
	cout << "4. Zarządzanie sprzętem\n";
	cout << "5. Cennik\n";
	cout << "0. Wyjscie z programu\n";

	int x;
	cin >> x;

	if (x > 5 || x < 0)
	{
		cout << "Blad!!!\n\n";
		wybierz_usluge();
	}

	else
		return x;
}

inline void Klient::rejestracja()
{
	fstream file;
	file.open("Klienci.txt", ios::out | ios::app);
	Klient k;

	cout << "Prosze podac swoje dane osobowe:\n";
	cout << "Imie: ";
	cin >> k.imie;
	cout << "Nazwisko: ";
	cin >> k.nazwisko;

	while (1)
	{
		cout << "Data urodzenia:\n";
		cout << "Dzien: ";
		cin >> k.dzien;
		cout << "Miesiac: ";
		cin >> k.miesiac;
		cout << "Rok: ";
		cin >> k.rok;

		if (k.dzien >= 1 && k.miesiac >= 1)
		{
			if (k.dzien == 31)
			{
				if (k.miesiac == 1 || k.miesiac == 3 || k.miesiac == 5 || k.miesiac == 7 || k.miesiac == 8 || k.miesiac == 10 || k.miesiac == 12)
					break;
			}

			else if (k.dzien <= 30 && k.dzien > 28)
			{
				if (k.miesiac == 1 || (k.miesiac >= 3 && k.miesiac <= 12))
					break;
			}

			else if (k.dzien == 28)
			{
				if (k.miesiac >= 1 && k.miesiac <= 12)
						break;
			}

			else if (k.dzien >= 1 && k.dzien <= 27)
			{
				if (k.miesiac >= 1 && k.miesiac <= 12)
					break;
			}
		}
		cout << "Wprowadzono nieprawidłowa date\n";
	}

	cout << "Pomyslnie zarejestrowano!\n";
	cout << "Imie:" << k.imie << "\nNazwisko:" << k.nazwisko << endl;
	cout << "Data urodzenia: ";

	if (k.dzien < 10)
		cout << "0" << k.dzien;

	else
		cout << k.dzien;

	if (k.miesiac < 10)
		cout << ".0" << k.miesiac;

	else
		cout << "." << k.miesiac;

	cout << "." << k.rok << endl;

	file << k.imie << "_" << k.nazwisko << endl << "Data urodzenia: ";

	if (k.dzien < 10)
		file << "0" << k.dzien;

	else
		file << k.dzien;

	if (k.miesiac < 10)
		file << ".0" << k.miesiac;

	else
		file << "." << k.miesiac;

	file << "." << k.rok << endl;
	file.close();
}
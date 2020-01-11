#pragma once
#include "header.h"
#include "pch.h"

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

		else if (userName == "janosik" && userPass == "maryna")
		{
			cout << "Witaj Michał Stawarski!\n";
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

int wybierz_usluge()
{
	cout << "Menu:\n";
	cout << "1. Rejestracja\n";
	cout << "2. Rezerwacja\n";
	cout << "3. Wypożyczenie\n";
	cout << "4. Zarządzanie sprzętem\n";
	cout << "5. Cennik\n";

	int x;
	cin >> x;

	if (x > 5 || x < 1)
	{
		cout << "Blad!!!\n\n";
		wybierz_usluge();
	}

	else
		return x;
}


#include "pch.h"
#include "header.h"

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
		system("cls");
		cout << "Wprowadzono nieprawid³owa date\n";
	}

	system("cls");
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
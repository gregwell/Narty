﻿#include "pch.h"
#include "header.h"

inline void Rezerwacja::dodaj_rezerwacje()
{
	Data data;
	int h;
	string temp_imie, temp_nazwisko, temp_merged;
	int znalezione = 0;
	string wyrazWpliku;

	cout << "Prosze podac dane klienta dla ktorego chcesz dokonac rezerwacji:" << endl;
	cout << "Klienci:" << endl;
	ifstream file{ "Klienci.txt" };
	cout << file.rdbuf();
	cout << "\n" << endl;

	fstream plik_rezerwacje;
	plik_rezerwacje.open("Rezerwacje.txt", ios::out | ios::app);


	do {

		cout << "Podaj imie: ";
		cin >> temp_imie;
		cout << "" << endl;

		cout << "Podaj nazwisko: ";
		cin >> temp_nazwisko;
		cout << "" << endl;

		temp_merged = temp_imie + "_" + temp_nazwisko;

		ifstream fin;
		fin.open("Klienci.txt");

		if (!fin.is_open()) {
			cout << "nie ma takiego pliku";
			exit(EXIT_FAILURE);
		}


		while (fin.good()) { // dopóki dane sa OK i nie EOF
			fin >> wyrazWpliku;
			if (wyrazWpliku == temp_merged) znalezione++;
		}
		fin.close();

		if (znalezione == 0) cout << "Podaj poprawne dane.." << endl;

	} while (znalezione == 0);

	cout << "Znaleziono klienta. Wprowadz date rezerwacji" << endl;

	while (1)
	{
		cout << "Wybierz dzien : ";
		cin >> data.dzien;
		cout << "Miesiac: ";
		cin >> data.miesiac;
		cout << "Rok: ";
		cin >> data.rok;
		cout << "Godzina: ";
		cin >> h;

		if (data.dzien >= 1 && data.miesiac >= 1)
		{
			if (data.dzien == 31)
			{
				if (data.miesiac == 1 || data.miesiac == 3 || data.miesiac == 5 || data.miesiac == 7 || data.miesiac == 8 || data.miesiac == 10 || data.miesiac == 12)
				{
					if (h >= 0 && h < 24)
						break;
				}
			}

			else if (data.dzien <= 30 && data.dzien > 28)
			{
				if (data.miesiac == 1 || (data.miesiac >= 3 && data.miesiac <= 12))
				{
					if (h >= 0 && h < 24)
						break;
				}
			}

			else if (data.dzien == 28)
			{
				if (data.miesiac >= 1 && data.miesiac <= 12)
				{
					if (h >= 0 && h < 24)
						break;
				}
			}

			else if (data.dzien >= 1 && data.dzien <= 27)
			{
				if (data.miesiac >= 1 && data.miesiac <= 12)
				{
					if (h >= 0 && h < 24)
						break;
				}
			}
		}
		cout << "Wprowadzono nieprawidłowa date\n";
		system("cls");
	}

	system("cls");
	cout << endl << "Wprowadzoo rezerwacje:\n";

	cout << "Pan/Pani: " + temp_imie + " " + temp_nazwisko << endl;

	if (data.dzien < 10)
		cout << "0" << data.dzien;

	else
		cout << data.dzien;

	if (data.miesiac < 10)
		cout << ".0" << data.miesiac;

	else
		cout << "." << data.miesiac;

	cout << "." << data.rok;
	cout << "\nGodzina: ";

	if (h < 10)
		cout << "0" << h << ":00\n";

	else
		cout << h << ":00\n";

	plik_rezerwacje << temp_imie << " " << temp_nazwisko << ", data: " << data.dzien << "." << data.miesiac << "." << data.rok << endl;
	plik_rezerwacje.close();
}
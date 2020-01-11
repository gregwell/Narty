#pragma once
#include <iostream>
#include <string>
#include "header.h"
#include "pch.h"
#include "stdafx.h"


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

void Cennik::wyswietl_ceny(narty, snowboard, buty, kije, kask, zestaw_narciarski, zestaw_snowboard, smarowanie, ostrzenie, pelny_serwis, wygrzewanie_butow, odbarczanie_punktowe)
{
	int x;
	cout << "Wybierz cennik: " << endl;
	cout << "Serwis [1]			Wypozyczalnia sprzetu [2]" << endl;
	cin >> x;
	if (x == 2)
	{
		cout << "Cena za wypozyczenie sprzetu: " << endl << endl;
		cout << "Narty			" << narty << endl;
		cout << "Snowboard		" << snowboard << endl;
		cout << "Buty			" << buty << endl;
		cout << "Kije			" << kije << endl;
		cout << "Kask			" << kask << endl;

		cout << "Zestaw Narciarski			" << zestaw_narciarski << endl;
		cout << "Zestaw Snowboard			" << zestaw_snowboard << endl;
	}
	else if (x == 1)
	{
		cout << "Cena za serwisowanie sprzetu: " << endl << endl;
		cout << "Smarowanie				" << smarowanie << endl;
		cout << "Ostrzenie				" << ostrzenie << endl;
		cout << "Pelny serwis			" << pelny_serwis << endl;
		cout << "Wygrzewanie butow		" << wygrzewanie_butow << endl;
		cout << "Odbarczanie punktowe	" << odbarczanie_punktowe << endl;
	}
	else if (x > 2 || x < 1) 
	{
		cout << "Nie ma takiego cennika" << endl;

	}
}


void Cennik::zmiana_cennika(narty, snowboard, buty, kije, kask, zestaw_narciarski, zestaw_snowboard, smarowanie, ostrzenie, pelny_serwis, wygrzewanie_butow, odbarczanie_punktowe) 
{
	int x, y;
	cout << "Wybierz produkt, ktorego cene chcesz zmienic: " << endl;
	cout << "wyjscie [0]" << endl << "narty [1]" << endl << "snowboard [2]" << endl << "buty [3]" << endl << "kije [4]" << endl << "kask [5]" << endl << "zestaw_narciarski [6]" << endl << "zestaw_snowboard [7]" << endl << "smarowanie [8]" << endl << "ostrzenie [9]" << endl << "pelny serwis [10]" << endl << "wygrzewanie butow [11]" << endl << "odbarczanie punktowe [12]" << endl;
	cin >> x;
	
	switch (x)
		{
		case(0):
		{
			return 0;
	}
		case(1):
		{
			cin >> y;
			narty = y;
			break;
		}
		case(2):
		{
			cin >> y;
			snowboard = y;
			break;
		}
		case(3):
		{
			cin >> y;
			buty = y;
			break;
		}
		case(4):
		{
			cin >> y;
			kije = y;
			break;
		}
		case(5):
		{
			cin >> y;
			kask = y;
			break;
		}
		case(6):
		{
			cin >> y;
			zestaw_narciarski = y;
			break;
		}
		case(7):
		{
			cin >> y;
			zestaw_snowboard = y;
			break;
		}
		case(8):
		{
			cin >> y;
			smarowanie = y;
			break;
		}
		case(9):
		{
			cin >> y;
			ostrzenie = y;
			break;
		}
		case(10):
		{
			cin >> y;
			pelny_serwis = y;
			break;
		}
		case(11):
		{
			cin >> y;
			wygrzewanie_butow = y;
			break;
		}
		case(12):
		{
			cin >> y;
			odbarczanie_punktowe = y;
			break;
		}
		default{
			zmiana_cennika();
		}
	}






}

void rejestracja() 
{





}
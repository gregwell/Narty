﻿#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

struct Data
{
	int dzien;
	int miesiac;
	int rok;
};

class Rezerwacja : public Data
{
	friend class Klient;
	friend class Uslugi;

public:
	void dodaj_rezerwacje();
};

class Wypozyczenie : public Data
{
	friend class Klient;
	friend class Uslugi;

public:
	void dodaj_wypozyczenie();
};

class Pracownik : private Data
{
private:
	string userName;
	string userPass;

public:
	void Login();
};

class Instruktor : private Data
{
private:
	string imie;
	string nazwisko;
	string kwalifikacje;
};

class Klient : public Data
{
private:
	string imie;
	string nazwisko;

public:
	void rejestracja();
};

class Zarzadzanie
{
	friend class Pracownik;

public:
	void dodaj_sprzet();
	void widok();
};

class Sprzet
{
	friend class Zarzadzanie;
	friend class Lekcja;

private:
	string typ;
	string stan;

public:
	inline int fun_sprzet()
	{
		cout << "Prosze wybrac sprzet:\n";
		cout << "[1] Narty\n[2] Snowboard\n";

		int x;
		cin >> x;

		if (x != 1 && x != 2)
		{
			system("cls");
			cout << "Blad!!!\n";
			fun_sprzet();
		}

		else
			return x;
	}
};

class Lekcja : private Data
{
public:
	void lekcja();
};

class Cennik
{
private:
	int narty;
	int snowboard;
	int buty;
	int kije;
	int kask;
	int zestaw_narciarski;
	int zestaw_snowboard;
	int smarowanie;
	int ostrzenie;
	int pelny_serwis;
	int wygrzewanie_butow;
	int odbarczanie_punktowe;
	
public:
Cennik() 
{	
	fstream cennik;
	cennik.open("cennik.txt", ios::in);
	int x;
	string y;
	for (x = 1; x <= 13; x++) {
		if (x == 1) 
		{
			getline(cennik, y);
			narty = atoi(y.c_str());
		}
		if(x==2)
		{
			getline(cennik, y);
			snowboard = atoi(y.c_str());
		}

		if (x == 3) {
			getline(cennik, y);
			buty = atoi(y.c_str());
			
		}
		if (x == 4) {
			getline(cennik, y);
			kije = atoi(y.c_str());
		}
		if(x==5)
		{
			getline(cennik, y);
			kask = atoi(y.c_str());
		}
		if(x==6)
		{
			getline(cennik, y);
			zestaw_narciarski = atoi(y.c_str());
		}
		if(x==7)
		{
			getline(cennik, y);
			zestaw_snowboard = atoi(y.c_str());
		}
		if(x==8)
		{
			getline(cennik, y);
			smarowanie = atoi(y.c_str());
		}
		if(x==9)
		{
			getline(cennik, y);
			ostrzenie = atoi(y.c_str());
		}
		if(x==10)
		{
			getline(cennik, y);
			pelny_serwis = atoi(y.c_str());
		}
		if(x==11)
		{
			getline(cennik, y);
			wygrzewanie_butow = atoi(y.c_str());
		}
		if(x==12)
		{
			getline(cennik, y);
			odbarczanie_punktowe = atoi(y.c_str());
		}
		if (x == 13)
			cennik.close();
	}
}
	void zmiana_cennika();
	void zmiana_narty(int p);
	void zmiana_snowboard(int p);
	void zmiana_buty(int p);
	void zmiana_kije(int p);
	void zmiana_kask(int p);
	void zmiana_narciarski(int p);
	void zmiana_snowboardowy(int p);
	void zmiana_smarowanie(int p);
	void zmiana_ostrzenie(int p);
	void zmiana_pelny(int p);
	void zmiana_wygrzewanie(int p);
	void zmiana_odbarczanie(int p);
	void wyswietl_ceny();
	void cennik_widok();
};
#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

class Data
{
public:
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
	void usun_sprzet();
};

class Sprzet
{
	friend class Zarzadzanie;
	friend class Lekcja;

private:
	int typ;

public:
	int wybor_typu_sprzetu();
	int zwrot_sprzetu();
};

class Lekcja : private Data
{
public:
	int wybierz_dzien();
	int wybierz_sprzet();
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
	narty = 30;
	snowboard = 30;
	buty = 20;
	kije = 15;
	kask = 15;
	zestaw_narciarski = 50;
	zestaw_snowboard = 50;
	smarowanie = 20;
	ostrzenie = 25;
	pelny_serwis = 100;
	wygrzewanie_butow = 150;
	odbarczanie_punktowe = 60;
}
	void zmiana_cennika();
	void zmiana_narty(int p, int h);
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
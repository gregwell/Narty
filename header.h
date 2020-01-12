#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Data
{
public:
	int dzien;
	int miesiac;
	int rok;
};

class Wypozyczalnia : public Data
{
	friend class Klient;
	friend class Uslugi;

public:
	void dodaj_rezerwacje();
	int dodaj_wypozyczenie();
	int zwroc_sprzet();
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
private:
	int czas;

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
	void platnosc();
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
	;
};
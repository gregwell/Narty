#pragma once
#include <iostream>
#include <string>
#include "pch.h"
#include "stdafx.h"


using namespace std;

struct Data
{
	int dzien;
	int miesiac;
	int rok;
};

class Wypozyczalnia : public Data
{
	friend class Klient;
	friend class Uslugi;

public:
	inline void dodaj_rezerwacje();
	inline int zarejestruj_klienta();
	inline int dodaj_wypozyczenie();
	inline int zwroc_sprzet();
};

class Pracownik : private Data
{
private:
	string userName;
	string userPass;

public:
	inline void Login();
};

class Instruktor : private Data
{
private:
	string imie;
	string nazwisko;
	string kwalifikacje;
};

class Klient
{
	friend class Rejestracja;

private:
	string imie;
	string nazwisko;
};

class Rejestracja
{
public:
	inline void rejestracja();
};

class Zarzadzanie
{
	friend class Pracownik;

public:
	inline void dodaj_sprzet();
	inline void usun_sprzet();
};

class Sprzet
{
	friend class Zarzadzanie;
	friend class Lekcja;

private:
	int typ;

public:
	inline int wybor_typu_sprzetu();
	inline int zwrot_sprzetu();
};

class Lekcja : private Data
{
private:
	int czas;

public:
	inline int wybierz_dzien();
	inline int wybierz_sprzet();
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
	inline void platnosc();
	//narty, snowboard, buty, kije, kask, zestaw_narciarski, zestaw_snowboard, smarowanie, ostrzenie, pelny_serwis, wygrzewanie_butow, odbarczanie_punktowe
	void wyswietl_ceny(narty, snowboard, buty, kije, kask, zestaw_narciarski, zestaw_snowboard, smarowanie, ostrzenie, pelny_serwis, wygrzewanie_butow, odbarczanie_punktowe);
	void zmiana_cennika();
};

inline int wybierz_usluge();

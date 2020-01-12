﻿#pragma once
#include <iostream>
#include <string>

using namespace std;

class Data
{
public:
	int dzien;
	int miesiac;
	int rok;

	int k();
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
	int rejestracja();
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
	int cena_dla_początkujących;
	int cena_dla_zaawansowanych;
	int cena_wypożyczenia;
	int cena_naprawy;

public:
	void platnosc();
};
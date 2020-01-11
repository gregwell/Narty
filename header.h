#pragma once
#include <iostream>
#include <string>
#include "pch.h"

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
	int cena_dla_początkujących;
	int cena_dla_zaawansowanych;
	int cena_wypożyczenia;
	int cena_naprawy;

public:
	inline void platnosc();
};

inline int wybierz_usluge();

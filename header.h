#pragma once
#include <iostream>
#include <string>

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
	void dodaj_rezerwacje();
	int zarejestruj_klienta();
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
	int cena_dla_początkujących;
	int cena_dla_zaawansowanych;
	int cena_wypożyczenia;
	int cena_naprawy;

public:
	void platnosc();
};
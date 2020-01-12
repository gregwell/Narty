#include "pch.h"
#include "header.h"

using namespace std;

inline void Cennik::wyswietl_ceny()
{
	int x;
	cout << "Wybierz cennik: " << endl;
	cout << "Serwis [1]			Wypozyczalnia sprzetu [2]" << endl;
	cin >> x;

	fstream cennik;
	cennik.open("cennik.txt", ios::in);


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

inline int Cennik::zmiana_narty(int p, int h)
{
	int j=p;
	int hh = h;
	fstream cennik;
	cennik.open("cennik.txt", ios::out);
	cennik.write((char*)&j, hh);
	cennik.close();
	
	return j;
}

inline void Cennik::zmiana_snowboard(int p)
{
	snowboard = p;

}

inline void Cennik::zmiana_buty(int p)
{
	buty = p;

}

inline void Cennik::zmiana_kije(int p)
{
	kije = p;

}

inline void Cennik::zmiana_kask(int p)
{
	kask = p;

}

inline void Cennik::zmiana_narciarski(int p)
{
	zestaw_narciarski = p;

}

inline void Cennik::zmiana_snowboardowy(int p)
{
	zestaw_snowboard = p;

}

inline void Cennik::zmiana_smarowanie(int p)
{
	smarowanie = p;

}

inline void Cennik::zmiana_ostrzenie(int p)
{
	ostrzenie = p;

}

inline void Cennik::zmiana_pelny(int p)
{
	pelny_serwis = p;

}

inline void Cennik::zmiana_wygrzewanie(int p)
{
	wygrzewanie_butow = p;

}

inline void Cennik::zmiana_odbarczanie(int p)
{
	odbarczanie_punktowe = p;

}


inline void Cennik::zmiana_cennika()
{
	int x, y;
	cout << "Wybierz produkt, ktorego cene chcesz zmienic: " << endl;
	cout << "wyjscie [0]" << endl << "narty [1]" << endl << "snowboard [2]" << endl << "buty [3]" << endl << "kije [4]" << endl << "kask [5]" << endl << "zestaw_narciarski [6]" << endl << "zestaw_snowboard [7]" << endl << "smarowanie [8]" << endl << "ostrzenie [9]" << endl << "pelny serwis [10]" << endl << "wygrzewanie butow [11]" << endl << "odbarczanie punktowe [12]" << endl;
	cin >> x;

	fstream cennik;
	cennik.open("cennik.txt", ios::out);


	switch (x)
	{
	case(0):
	{
		break;
	}
	case(1):
	{
		int x;
		cout << "wprowadz cene: " << endl;
		cin >> x;
		zmiana_narty(x, 1);
		cout << "cena zmieniona na: " << zmiana_narty(x, 1) << endl;
		break;
	}
	case(2):
	{
		int x;
		cout << "wprowadz cene: " << endl;
		cin >> x;
		zmiana_snowboard(x);
		cout << "cena zmieniona na: " << snowboard << endl;
		break;
	}
	case(3):
	{
		int x;
		cout << "wprowadz cene: " << endl;
		cin >> x;
		zmiana_buty(x);
		cout << "cena zmieniona na: " << buty << endl;
		break;
	}
	case(4):
	{
		int x;
		cout << "wprowadz cene: " << endl;
		cin >> x;
		zmiana_kije(x);
		cout << "cena zmieniona na: " << kije << endl;
		break;
	}
	case(5):
	{
		int x;
		cout << "wprowadz cene: " << endl;
		cin >> x;
		zmiana_kask(x);
		cout << "cena zmieniona na: " << kask << endl;
		break;
	}
	case(6):
	{
		int x;
		cout << "wprowadz cene: " << endl;
		cin >> x;
		zmiana_narciarski(x);
		cout << "cena zmieniona na: " << zestaw_narciarski << endl;
		break;
	}
	case(7):
	{
		int x;
		cout << "wprowadz cene: " << endl;
		cin >> x;
		zmiana_snowboardowy(x);
		cout << "cena zmieniona na: " << zestaw_snowboard << endl;
		break;
	}
	case(8):
	{
		int x;
		cout << "wprowadz cene: " << endl;
		cin >> x;
		zmiana_smarowanie(x);
		cout << "cena zmieniona na: " << smarowanie << endl;
		break;
	}
	case(9):
	{
		int x;
		cout << "wprowadz cene: " << endl;
		cin >> x;
		zmiana_ostrzenie(x);
		cout << "cena zmieniona na: " << ostrzenie << endl;
		break;
	}
	case(10):
	{
		int x;
		cout << "wprowadz cene: " << endl;
		cin >> x;
		zmiana_pelny(x);
		cout << "cena zmieniona na: " << pelny_serwis << endl;
		break;
	}
	case(11):
	{
		int x;
		cout << "wprowadz cene: " << endl;
		cin >> x;
		zmiana_wygrzewanie(x);
		cout << "cena zmieniona na: " << wygrzewanie_butow << endl;
		break;
	}
	case(12):
	{
		int x;
		cout << "wprowadz cene: " << endl;
		cin >> x;
		zmiana_odbarczanie(x);
		cout << "cena zmieniona na: " << odbarczanie_punktowe << endl;
		break;
	}
	default:
		break;
	}
}

inline void Cennik::cennik_widok() {
	int x;
	cout << "wyjscie [0]" << endl << "wyswietl cennik [1] " << endl << "zmiana cennika [2] " << endl;

	cin >> x;

	switch (x)
	{
	case(0): {
			exit(0);
	}
	case(1): {
			wyswietl_ceny();
			break;
		}
	case(2): {
		zmiana_cennika();
		break;
	}

	default:
		break;
	}

};
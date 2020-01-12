#include "pch.h"
#include "header.h"

using namespace std;

void Cennik::wyswietl_ceny()
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

void Cennik::zmiana_narty(int p)
{
	narty = p;

}



void Cennik::zmiana_cennika()
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
		int x;
		cout << "wprowadz cene: " << endl;
		cin >> x;
		zmiana_narty(x)
		{
			narty = x;

		}


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


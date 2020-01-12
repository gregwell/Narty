#include "pch.h"
#include "header.h"

inline void Wypozyczalnia::dodaj_rezerwacje()
{
	Data data;
	int h;
	
	while (1)
	{
		cout << "Wybierz dzien : ";
		cin >> data.dzien;
		cout << "Miesiac: ";
		cin >> data.miesiac;
		cout << "Rok: ";
		cin >> data.rok;
		cout << "Godzina: ";
		cin >> h;

		if (data.dzien >= 1 && data.miesiac >= 1)
		{
			if (data.dzien == 31)
			{
				if (data.miesiac == 1 || data.miesiac == 3 || data.miesiac == 5 || data.miesiac == 7 || data.miesiac == 8 || data.miesiac == 10 || data.miesiac == 12)
				{
					if (h >= 0 && h < 24)
						break;
				}
			}

			else if (data.dzien <= 30 && data.dzien > 28)
			{
				if (data.miesiac == 1 || (data.miesiac >= 3 && data.miesiac <= 12))
				{
					if (h >= 0 && h < 24)
						break;
				}
			}

			else if (data.dzien == 28)
			{
				if (data.miesiac >= 1 && data.miesiac <= 12)
				{
					if (h >= 0 && h < 24)
						break;
				}
			}

			else if (data.dzien >= 1 && data.dzien <= 27)
			{
				if (data.miesiac >= 1 && data.miesiac <= 12)
				{
					if (h >= 0 && h < 24)
						break;
				}
			}
		}
		cout << "Wprowadzono nieprawidłowa date\n";
	}

	cout << endl << "Wprowadzono date rezerwacji:\n";

	if (data.dzien < 10)
		cout << "0" << data.dzien;

	else
		cout << data.dzien;

	if (data.miesiac < 10)
		cout << ".0" << data.miesiac;

	else
		cout << "." << data.miesiac;

	cout << "." << data.rok;
	cout << "\nGodzina: ";

	if (h < 10)
		cout << "0" << h << ":00\n";

	else
		cout << h << ":00\n";
}

inline void Pracownik::Login()
{
	while (1)
	{
		cout << "Podaj login : ";
		cin >> userName;
		cout << "Podaj haslo : ";
		cin >> userPass;

		if (userName == "greg69" && userPass == "qwerty")
		{
			cout << "Witaj Grzegorz Studzisski!\n";
			break;
		}

		else if (userName == "janosik" && userPass == "maryna")
		{
			cout << "Witaj Michal Stawarski!\n";
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

inline int wybierz_usluge()
{
	cout << "Menu:\n";
	cout << "1. Rejestracja\n";
	cout << "2. Rezerwacja\n";
	cout << "3. Wypożyczenie\n";
	cout << "4. Zarządzanie sprzętem\n";
	cout << "5. Cennik\n";
	cout << "0. Wyjscie z programu\n";

	int x;
	cin >> x;

	if (x > 5 || x < 0)
	{
		cout << "Blad!!!\n\n";
		wybierz_usluge();
	}

	else
		return x;
}

inline void Klient::rejestracja()
{
	fstream file;
	file.open("Klienci.txt", ios::out | ios::app);
	Klient k;

	cout << "Prosze podac swoje dane osobowe:\n";
	cout << "Imie: ";
	cin >> k.imie;
	cout << "Nazwisko: ";
	cin >> k.nazwisko;

	while (1)
	{
		cout << "Data urodzenia:\n";
		cout << "Dzien: ";
		cin >> k.dzien;
		cout << "Miesiac: ";
		cin >> k.miesiac;
		cout << "Rok: ";
		cin >> k.rok;

		if (k.dzien >= 1 && k.miesiac >= 1)
		{
			if (k.dzien == 31)
			{
				if (k.miesiac == 1 || k.miesiac == 3 || k.miesiac == 5 || k.miesiac == 7 || k.miesiac == 8 || k.miesiac == 10 || k.miesiac == 12)
					break;
			}

			else if (k.dzien <= 30 && k.dzien > 28)
			{
				if (k.miesiac == 1 || (k.miesiac >= 3 && k.miesiac <= 12))
					break;
			}

			else if (k.dzien == 28)
			{
				if (k.miesiac >= 1 && k.miesiac <= 12)
						break;
			}

			else if (k.dzien >= 1 && k.dzien <= 27)
			{
				if (k.miesiac >= 1 && k.miesiac <= 12)
					break;
			}
		}
		cout << "Wprowadzono nieprawidłowa date\n";
	}

	cout << "Pomyslnie zarejestrowano!\n";
	cout << "Imie:" << k.imie << "\nNazwisko:" << k.nazwisko << endl;
	cout << "Data urodzenia: ";

	if (k.dzien < 10)
		cout << "0" << k.dzien;

	else
		cout << k.dzien;

	if (k.miesiac < 10)
		cout << ".0" << k.miesiac;

	else
		cout << "." << k.miesiac;

	cout << "." << k.rok << endl;

	file << k.imie << " " << k.nazwisko << endl << "Data urodzenia: ";

	if (k.dzien < 10)
		file << "0" << k.dzien;

	else
		file << k.dzien;

	if (k.miesiac < 10)
		file << ".0" << k.miesiac;

	else
		file << "." << k.miesiac;

	file << "." << k.rok << endl;
	file.close();
}

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






}

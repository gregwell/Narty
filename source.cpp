#include "pch.h"
#include "header.h"

inline void Wypozyczalnia::dodaj_rezerwacje()
{
	Data data;
	int h;
	
	while (1)
	{
		cout << "Wybierz dzień : ";
		cin >> data.dzien;
		cout << "Miesiąc: ";
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
		cout << "Podaj hasło : ";
		cin >> userPass;

		if (userName == "greg69" && userPass == "qwerty")
		{
			cout << "Witaj Grzegorz Studziński!\n";
			break;
		}

		else if (userName == "janosik" && userPass == "maryna")
		{
			cout << "Witaj Michał Stawarski!\n";
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

	if (x > 5 || x < 1)
	{
		cout << "Blad!!!\n\n";
		wybierz_usluge();
	}

	else
		return x;
}

inline void cennik()
{
	int x;
	cout << "Wybierz cennik: " << endl;
	cout << "Serwis [1]			Wypozyczalnia sprzetu [2]" << endl;
	cin >> x;
	if (x == 2)
	{
		cout << "Cena za wypozyczenie sprzetu: " << endl << endl;
		cout << "Narty			30 zl" << endl;
		cout << "Snowboard		30 zl" << endl;
		cout << "Buty			20 zl" << endl;
		cout << "Kije			10 zl" << endl;
		cout << "Kask			15 zl" << endl;

		cout << "Zestaw Narciarski			60 zl" << endl;
		cout << "Zestaw Snowboard			50 zl" << endl;
	}
	else if (x == 1)
	{
		cout << "Cena za serwisowanie sprzetu: " << endl << endl;
		cout << "Smarowanie				25 zl" << endl;
		cout << "Ostrzenie				30 zl" << endl;
		cout << "Pelny serwis			100 zl" << endl;
		cout << "Wygrzewanie butow		150 zl" << endl;
		cout << "Odbarczanie punktowe	60 zl" << endl;
	}
	else if (x > 2 || x < 1)
	{
		cout << "Nie ma takiego cennika" << endl;

	}
}

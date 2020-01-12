#include "pch.h"
#include "source.cpp"
#include "cennik.cpp"
#include "header.h"

int main()
{
	cout << "Witaj w programie Narty33 - najlepszej aplikacji do zarzadzania nartami na swiecie" << endl;

	char x;
	Pracownik p;
	Wypozyczalnia rez;
	Klient reg;

	p.Login();			

	do
	{	
		int menu = wybierz_usluge();

		switch (menu)
		{
		case(0):
		{
			exit(0);
		}
		case(1):
		{
			reg.rejestracja();
			break;
		}
		case(2):
		{
			rez.dodaj_rezerwacje();
			break;
		}
		case(5):
		{
			cennik_widok();
			break;
		}
		}

		cout << "Czy chcesz kontynować?\nTAK[dowolny przycisk]\tNIE[q]\n";
		cin >> x;
	} while (x != 'q');

	return 0;
}


#include "pch.h"
#include "source.cpp"

int main()
{
	cout << "Witaj w programie Narty33 - najlepszej aplikacji do zarzadzania nartami na swiecie" << endl;

	Pracownik p;
	p.Login();

	int menu = wybierz_usluge();

	while (1)
	{
		switch (menu)
		{
		case(0):
		{
			exit(0);
		}
		case(2):
		{
			Wypozyczalnia rez;
			rez.dodaj_rezerwacje();
			break;
		}
		case(5):
		{
			cennik();
			break;
		}
		}
	}

	return 0;
}


#include "pch.h"
#include "source.cpp"

int main()
{
	char x;
	cout << "Witaj w programie Narty33 - najlepszej aplikacji do zarzadzania nartami na swiecie" << endl;

	Pracownik p;
	p.Login();			
	Wypozyczalnia rez;

	int menu = wybierz_usluge();

	while (x = 'q')
	{	
		switch (menu)
		{
		case(0):
		{
			exit(0);
		}
		case(1):
		{

		}
		case(2):
		{
			rez.dodaj_rezerwacje();
			break;
		}
		case(5):
		{
			cennik();
			break;
		}
		}

		cout << "Czy chcesz kontynować?\nTAK[q]\tNIE[dowolny przycisk]\n";
		cin >> x;

		if (x != 'q')
			break;
	}

	return 0;
}


#include "pch.h"
#include "source.cpp"
#include "cennik.cpp"
#include "Rezerwacja.cpp"
#include "Wypozyczenie.cpp"
#include "lekcja.cpp"

int main()
{
	cout << "Witaj w programie Narty33 - najlepszej aplikacji do zarzadzania nartami na swiecie" << endl;

	char x;
	Pracownik p;
	Rezerwacja rez;
	Klient reg;
	Cennik cena;
	Lekcja inst;

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
			system("cls");
			reg.rejestracja();
			break;
		}
		case(2):
		{
			system("cls");
			rez.dodaj_rezerwacje();
			break;
		}
		case(5):
		{
			system("cls");
			cena.cennik_widok();
			break;
		}
		case(6):
		{
			system("cls");
			inst.lekcja();
			break;
		}
		}
		cout << "Czy chcesz kontynować?\nTAK[dowolny przycisk]\tNIE[q]\n";
		cin >> x;
		system("cls");
	} while (x != 'q');

	return 0;
}


#include "pch.h"
#include "header.h"

inline void Zarzadzanie::dodaj_sprzet()
{
	fstream file;
	file.open("Sprzet.txt", ios::out | ios::app);

	Sprzet sprzet;
	int ID;

	while (1)
	{
		int x = sprzet.fun_sprzet();

		switch (x)
		{
		case(1):
		{
			sprzet.typ = "Narty";
			break;
		}
		case(2):
		{
			sprzet.typ = "Snowboard";
			break;
		}
		}break;
	}

	system("cls");
	
	while (1)
	{
		int x;
		cout << "Podaj stan sprzetu:\n";
		cout << "[1] Swietny\n[2] Dobry\n[3] Sredni\n[4] Dostateczny\n";
		cin >> x;

		if (x == 1)
		{
			sprzet.stan = "Swietny";
			break;
		}
		
		else if (x == 2)
		{
			sprzet.stan = "Dobry";
			break;
		}

		else if (x == 3)
		{
			sprzet.stan = "Sredni";
			break;
		}

		else if (x == 4)
		{
			sprzet.stan = "Dostateczny";
			break;
		}

		system("cls");
		cout << "Blad!\n";
	}


}


inline void zarzadzanie_sprzetem()
{
	Zarzadzanie sprzet;
	int x;

	cout << "[1] Dodaj sprzet do bazy danych\n[2]Usun sprzet z bazy danych\n";
	
	while(1)
	{
		cin >> x;

		if (x == 1)
		{
			sprzet.dodaj_sprzet();
			system("cls");
			break;
		}

		else if (x == 2)
		{
			sprzet.usun_sprzet();
			system("cls");
			break;
		}

		system("cls");
		cout << "Blad!\n\n";
	}
}
#include "pch.h"
#include "header.h"

inline void Zarzadzanie::dodaj_sprzet()
{

	cout << "Witaj w managerze sprzetu" << endl;
	cout << "Wybierz sprzet" << endl;
	

	Sprzet sprzet;

	while (1)
	{
		int x = sprzet.fun_sprzet(); // wybieranie sprzetu

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
		case(3):
		{
			sprzet.typ = "Buty";
			break;
		}
		case(4):
		{
			sprzet.typ = "Kije";
			break;
		}
		case(5):
		{
			sprzet.typ = "Kask";
			break;
		}
		}break;
	}

	cout << "Podaj rozmiar/dlugosc" << endl;
	string rozmiar_sprzetu;
	cin >> rozmiar_sprzetu;

	string nazwa_pliku;
	nazwa_pliku = + "sprzet/" + sprzet.typ + rozmiar_sprzetu + ".txt";


	fstream file;
	file.open(nazwa_pliku, ios::out | ios::app);

	fstream wszystkie;
	wszystkie.open("wszystkie.txt", ios::out | ios::app);

	long int ID;


	system("cls");
	cout << "Wprowadz numer identyfikacyjny dodanego sprzetu(6-cyfrowy kod)\n";


	while (1)
	{
		cout << "\nID: ";
		cin >> ID;

		if (ID <= 999999 && ID >= 100000 && zgodneID(ID)) 
			break;
			
	

		system("cls");
		cout << "Wprowadzono niepoprawny kod!\nWprowadz numer identyfikacyjny ponownie!(6-cyfrowy kod)\n";

	}
	cout << "HUJJJJ3" << endl;
	wszystkie << ID << endl;

	system("cls");
	cout << "Zapisano nowy sprzet w bazie danych:\n";
	cout << "ID: " << ID << endl;

	file << ID << endl;

	file.close();
}

inline bool Zarzadzanie::zgodneID(long ID)
{
	fstream wszystkie;
	wszystkie.open("wszystkie.txt", ios::in);
	string temp;
	long x;
	while(!wszystkie.eof()){

		getline(wszystkie, temp);
		x = atoi(temp.c_str()); //string -> int (biezaca linia pliku)

		if (ID == x) {
			return false;
		}
	}
	return true;
}


inline void Zarzadzanie::widok()
{
	ifstream file{ "Sprzet.txt" };
	cout << file.rdbuf();

	if (!file.is_open()) {
		cout << "nie ma takiego pliku";
		exit(EXIT_FAILURE);
	}
	cout << endl << endl << "Czy chcesz wyczyscic baze danych?\n";
	cout << "[1] TAK\t\t[dowolny przycisk] NIE\n";

	char x;
	cin >> x;

	file.close();

	if (x == '1')
	{
		system("cls");
		ofstream out;
		out.open("Sprzet", ios::out | ios::trunc);
		out.close();

		cout << "Wyczysczono baze danych sprzetu!\n";
	}
}
inline void zarzadzanie_sprzetem()
{
	Zarzadzanie sprzet;
	int x;

	cout << "[1] Dodaj sprzet do bazy danych\n[2] Przegladanie sprzetu z bazy danych\n";
	
	while(1)
	{
		cin >> x;

		if (x == 1)
		{
			system("cls");
			sprzet.dodaj_sprzet();
			break;
		}

		else if (x == 2)
		{
			system("cls");
			sprzet.widok();
			break;
		}

		system("cls");
		cout << "Blad!\n\n";
	}
}
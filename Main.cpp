#include "source.cpp"
#include "pch.h"

int main()
{
	Pracownik p;
	p.Login();

	int menu = wybierz_usluge();

	while (1)
	{
		switch (menu)
		{
		case(5):
		{
			cennik();
			break;
		}
		}
	}
	system("pause");
	return 0;
}
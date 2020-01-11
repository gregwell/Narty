#include <iostream>
#include <string>
#include "pch.h"
#include "source.cpp"
#include "stdafx.h"

int main()
{
	Pracownik p;
	p.Login();

	int menu = wybierz_usluge();

	system("pause");
	return 0;
}

#pragma once
#include "pch.h"
#include "header.h"
#include "source.cpp"

int main()
{
	Pracownik p;
	p.Login();

	int menu = wybierz_usluge();

	system("pause");
	return 0;
}

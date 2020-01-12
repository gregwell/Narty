#pragma once
#include <iostream>
#include <string>
#include "pch.h"
#include "header.h"
#include "source.cpp"
#include "stdafx.h"


using namespace std;

int main()
{
	Pracownik p;
	p.Login();

	int menu = wybierz_usluge();

	system("pause");
	return 0;
}

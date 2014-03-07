// Words.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include"WordsList.h"
#include"UsersList.h"
#include"Game.h"

int _tmain(int argc, _TCHAR* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	locale::global(locale("rus"));

	WordsList Cities;
	
	UsersList Inputs;

	Game Play(Cities.GetWord(),&Cities,&Inputs);

		
	
	return 0;
}


#include "stdafx.h"
#include "Game.h"

#include"Functions.h"


Game::Game(string OneCityGiven,WordsList * CitiesList,UsersList *InputsList)
{
	string tempName = " ";
	string OneCity = OneCityGiven;
	
	while (true)
	{
		while (tempName.at(0) != (char)toupper(OneCity.at(OneCity.size() - 1)))
		{
			
			cout << "Dell : " << OneCity.c_str() << endl;
			cout << "Ваш ввод : ";
			cin >> tempName;
			tempName.at(0) = (char)toupper(tempName.at(0));

			
			
			system("cls");

			if (tempName.at(0) != (char)toupper(OneCity.at(OneCity.size() - 1)) && InputsList->CheckCity(&tempName))
			{
				cout << "Неправильний ввiд! Cпробуйте знову :"<<endl;
			}
			else if (InputsList->CheckCity(&tempName))
			{
				cout << "Неправильний ввiд! Cпробуйте знову :" << endl;
			}
			
		}

		InputsList->Add(&tempName);
		
		OneCity = findCity(tempName, CitiesList->GetCities())->first;
		

		system("cls");

	}
	
}


Game::~Game()
{
}

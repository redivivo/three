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
			cout << "��� ���� : ";
			cin >> tempName;
			tempName.at(0) = (char)toupper(tempName.at(0));

			
			
			system("cls");

			if (tempName.at(0) != (char)toupper(OneCity.at(OneCity.size() - 1)) && InputsList->CheckCity(&tempName))
			{
				cout << "������������ ��i�! C�������� ����� :"<<endl;
			}
			else if (InputsList->CheckCity(&tempName))
			{
				cout << "������������ ��i�! C�������� ����� :" << endl;
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

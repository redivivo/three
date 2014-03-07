#pragma once
#include"UsersList.h"
#include"WordsList.h"

class Game
{
public:
	Game(string OneCityGiven, WordsList * CitiesList, UsersList *Inputslist);
	~Game();
};


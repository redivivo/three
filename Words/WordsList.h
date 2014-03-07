#pragma once
class WordsList
{
	map<string, int> cities;
public:
	WordsList();
	string GetWord();
	map<string, int> * GetCities();
	~WordsList();
};


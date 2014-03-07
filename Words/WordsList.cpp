#include "stdafx.h"
#include "WordsList.h"





WordsList::WordsList()
{
	ifstream file;
	file.open("List2.txt");

	pair<string, int> temp;

	string tempName = " ";


	while (file)
	{

		temp.second = 0;
		getline(file, temp.first, ' ');
		//temp.first = tempName;
		//	cout << temp.first << " " << temp.second << " " << endl;
		cities.insert(temp);


		//	cout << It->first.c_str() << " " << It->second<<endl;

		//		system("pause");
	}
}

string WordsList::GetWord()
{
	srand(time(NULL));
	map<string, int>::iterator RandomIterator;
	RandomIterator = cities.begin();
	for (int i = 0; i < rand() % (cities.size() - 1); i++)
	{
		RandomIterator++;
	}
	
	return RandomIterator->first;
}

map<string, int> *WordsList::GetCities()
{
	return &this->cities;
	//someting changed
	int i = 0;
}

WordsList::~WordsList()
{
}
/*
git init - ініціюю пустий репозиторій в папці з проектом
git add - додати
git status - перевірити, які папки додані і файли
git commit -am "first commit"
git log - що коли було додано
git remote add origin https://... вказати куди відсилати
git remote -v перевірка
*/
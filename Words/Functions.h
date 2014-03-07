#pragma once
#include"stdafx.h"

map<string, int>::iterator findCity(string city, map<string, int> *mmap)
{

	map<string, int>::iterator IteratorBegin = mmap->begin();
	map<string, int>::iterator IteratorEnd = mmap->end();
	map<string, int>::iterator Iterator = mmap->begin();
	char Letter;
	Letter = (char)toupper(city.at(city.size() - 1));
	while (true)
	{

		//	cout << Letter << endl;
		//	system("pause");

		if (Iterator->second == 0 && Iterator->first.at(0) == Letter)
		{
			Iterator->second = 1;
			break;
		}
		if (Iterator == IteratorEnd)
		{

			cout << "Нет ответа" << endl;
			break;
		}
		Iterator++;
	}

	return Iterator;
}

int CheckCity(string word, map<string, int> *mmap)
{
	map<string, int>::iterator IteratorBegin = mmap->begin();
	map<string, int>::iterator IteratorEnd = mmap->end();
	map<string, int>::iterator Iterat = mmap->begin();
	int value = 0;
	if (mmap->size() < 2) return 0;
	for (int i = 0; i < mmap->size(); i++)
	{
		if (word == Iterat->first&&Iterat->second == 0)
		{
			value = 1;//present in the list
			break;
		}
		if (word == Iterat->first&&Iterat->second == 1)
		{
			value == 2;//was used
			break;
		}
		else if (Iterat == IteratorEnd) break; // not found
		else Iterat++;
	}
	return value;
}

void Message(int answer)
{
	switch (answer)
	{
	case 0:
		cout << "wrong input" << endl;
		break;
	case 1:
		break;
	case 2:
		cout << "already used" << endl;
		break;
	default:
		break;

	}
}
void kirylic()
{
	
}
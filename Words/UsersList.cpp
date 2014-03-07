#include "stdafx.h"
#include "UsersList.h"


UsersList::UsersList()
{

}

void UsersList::Add(string *input)
{
	pair<string, int> PairInput;
	map<string, int>::iterator InputIterator;
	PairInput.first = *input;
	PairInput.second = 0;
	inputs.insert(PairInput);
	

}

bool UsersList::CheckCity(string *input)
{
	map<string, int>::iterator IteratorBegin = inputs.begin();
	map<string, int>::iterator IteratorEnd = inputs.end();
	map<string, int>::iterator Iterator = inputs.begin();
	for (; IteratorBegin != inputs.end(); IteratorBegin++) {
		if ((*IteratorBegin).first == *input) {
			return true;
		}
	}
	return false;
}

UsersList::~UsersList()
{
}

#pragma once
class UsersList
{
	map<string, int> inputs;
public:
	UsersList();
	void Add(string *input);
	bool CheckCity(string *input);
	~UsersList();
};


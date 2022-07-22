#pragma once

#include "Person.h"
#include "Bull.h"
class Minotaur :public Bull, public Person
{

private:
	bool mazekeeper;
public:
	Minotaur(char* name, bool sex, bool blood, bool wild, float height, float weight, bool mazekeeper);
	virtual void print()const;
	~Minotaur() {};
	virtual const char* get_type()const;

};


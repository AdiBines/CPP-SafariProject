#pragma once
#pragma once
#include "Animal.h"
#include "InVertebrates.h"

class Fly:public InVertebrates
{

private:
	int flyspeed;
public:
	Fly(char* name, bool sex, bool fly, int flyspeed);
	~Fly() {};
	virtual void print()const;
	virtual const char* get_type()const;

};


#pragma once
#include "Animal.h"
#include "InVertebrates.h"

class Ant :public InVertebrates
{
private:
	bool isbite;
public:
	Ant(char* name, bool sex, bool fly, bool isbite);
	~Ant() {};
	virtual void print()const;
	virtual const char* get_type()const;
};
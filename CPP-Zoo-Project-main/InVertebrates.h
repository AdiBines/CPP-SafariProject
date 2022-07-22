#pragma once
#include<iostream>
#include "Animal.h"
using namespace std;

class InVertebrates :public Animal
{
protected:
	bool fly;
public:
	InVertebrates(char* name, bool sex, bool fly);
	~InVertebrates() {};
	virtual void print()const;
};
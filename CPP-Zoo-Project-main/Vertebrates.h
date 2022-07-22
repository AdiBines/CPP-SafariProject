#pragma once
#include "Animal.h"
#include<iostream>

using namespace std;
class Vertebrates :public Animal
{
protected:
	bool blood;
public:
	Vertebrates(char* name, bool sex, bool blood);
	~Vertebrates() {}
	virtual void print()const;
};
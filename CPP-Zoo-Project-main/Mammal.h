#pragma once
#include "Animal.h"
#include "Vertebrates.h"
class Mammal :public Vertebrates
{
public:
	Mammal(char* name, bool sex, bool blood);
	~Mammal() {};
	virtual void print()const;
};

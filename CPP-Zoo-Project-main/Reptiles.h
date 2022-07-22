#pragma once
#include "Vertebrates.h"
#include  "Animal.h"
class Reptiles :public Vertebrates
{

protected:
	bool legs;
public:
	Reptiles(char* name, bool sex, bool blood, bool legs);
	virtual void print()const;
	~Reptiles() {}
};

#pragma once
#include "Vertebrates.h"
#include  "Animal.h"
#include "Reptiles.h"
class Lizard :public Reptiles
{
private:
	int legsspeed;

public:
	Lizard(char* name, bool sex, bool blood, bool legs, int legsspeed);
    virtual void print()const;
	~Lizard() {}
	virtual const char* get_type()const;



	 
};

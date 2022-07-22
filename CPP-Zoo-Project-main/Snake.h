#pragma once
#include "Vertebrates.h"
#include  "Animal.h"
#include "Reptiles.h"
class Snake :public Reptiles
{
private:
	int groundspeed;
	bool venom;
public:
	Snake(char* name, bool sex, bool blood, bool legs, int groundspeed, bool venom);
	virtual void print()const;
	~Snake() {};
	virtual const char* get_type()const;
};

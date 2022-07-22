#pragma once
#include "Mammal.h"
class Bull :virtual public Mammal
{

protected:
	bool wild;
public:
	Bull(char* name, bool sex, bool blood, bool wild);
	~Bull() {};
	virtual void print()const;
	virtual const char* get_type()const;

};


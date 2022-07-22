#pragma once
#include "Mammal.h"
class Person :virtual public Mammal
{

protected:
	float height;
	float weight;
public:
	Person(char* name, bool sex, bool blood, float height, float weight);
	~Person() {};
	virtual void print()const;
	virtual const char* get_type()const;
};
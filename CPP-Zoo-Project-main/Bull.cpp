#include "Bull.h"

Bull::Bull(char* name, bool sex, bool blood, bool wild)
	:Mammal(name, sex, blood)
{
	this->wild = wild;
}

void Bull::print() const
{
	Mammal::print();
	if (wild)
		cout << "The bull is wild " << endl;
	else
		cout << "The bull isnt wild " << endl;
}

const char* Bull::get_type() const
{
	return "Bull";
}

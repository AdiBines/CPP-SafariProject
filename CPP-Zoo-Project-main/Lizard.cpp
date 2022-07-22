#include "Lizard.h"

Lizard::Lizard(char* name, bool sex, bool blood, bool legs, int legsspeed)
	: Reptiles(name, sex, blood, legs)
{
	this->legsspeed = legsspeed;
}

void Lizard::print() const
{
	Reptiles::print();
	cout << "The speed of the Lizard is : " << legsspeed << endl;
}

const char* Lizard::get_type() const
{
	return "Lizard";
}


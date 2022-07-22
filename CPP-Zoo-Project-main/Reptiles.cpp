#include "Reptiles.h"

Reptiles::Reptiles(char* name, bool sex, bool blood, bool legs)
	:Vertebrates(name, sex, blood)
{
	this->legs = legs;
}

void Reptiles::print() const
{
	Vertebrates::print();
	if (!legs)
		cout << "The animal has not legs" << endl;
	else cout << "The animal has legs" << endl;
}

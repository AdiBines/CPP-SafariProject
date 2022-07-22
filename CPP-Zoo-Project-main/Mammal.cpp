#include "Mammal.h"

Mammal::Mammal(char* name, bool sex, bool blood)
	:Vertebrates(name, sex, blood)
{

}

void Mammal::print() const
{
	Vertebrates::print();
}

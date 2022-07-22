#include "Ant.h"

Ant::Ant(char* name, bool sex, bool fly, bool isbite)
	:InVertebrates(name, sex, fly)
{
	this->isbite = isbite;
}

void Ant::print() const
{
	InVertebrates::print();
	if (!isbite)
		cout << "The Ant doesnt bite  " << endl;
	else
		cout << "The Ant does bite  " << endl;
}

const char* Ant::get_type() const
{
	return "Ant";
}

#include "Fly.h"
#include "Animal.h"
#include "InVertebrates.h"
Fly::Fly(char* name, bool sex, bool fly, int flyspeed)
	:InVertebrates(name, sex, fly)
{
	this->flyspeed = flyspeed;
}

void Fly::print() const
{
	InVertebrates::print();
	cout << "The speed of the fly is : " << flyspeed << endl;
}

const char* Fly::get_type() const
{
	return "Fly";
}

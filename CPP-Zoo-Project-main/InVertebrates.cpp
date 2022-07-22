#include "InVertebrates.h"

InVertebrates::InVertebrates(char* name, bool sex, bool fly)
	:Animal(name, sex)
{
	this->fly = fly;
}

void InVertebrates::print() const
{
	cout << "The animal name is: " << name << endl;
	if (sex)
		cout << "The animal is Male" << endl;
	else
		cout << "The animal is Female" << endl;
	cout << "The animal is InVertebrates" << endl;
	if (fly)
		cout << "The animal is a flying animal" << endl;
	else cout << "The animal is not a flying animal" << endl;
}


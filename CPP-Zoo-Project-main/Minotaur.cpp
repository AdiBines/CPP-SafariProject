#include "Minotaur.h"

Minotaur::Minotaur(char* name, bool sex, bool blood, bool wild, float height, float weight, bool mazekeeper)
:Mammal(name, sex, blood) ,Bull(name,sex,blood,wild)
,Person(name,sex,blood,height,weight)
{
	this->mazekeeper = mazekeeper;
}

void Minotaur::print() const
{
	Mammal::print();
	cout << "height is : " << height << endl;
	cout << "weight is : " << weight << endl;
	if (mazekeeper)
		cout << "The Minotaur is maze keeper" << endl;
	else
		cout << "The Minotaur isnt maze keeper" << endl;
}

const char* Minotaur::get_type() const
{
	return "Minotaur";
}

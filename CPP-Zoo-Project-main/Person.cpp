#include "Person.h"

Person::Person(char* name, bool sex, bool blood, float height, float weight)
	:Mammal(name, sex, blood)
{
	this->height = height;
	this->weight = weight;
}

void Person::print() const
{
	Mammal::print();
	cout << "The height is : " << height <<endl<< "The weight is : " << weight << endl;
}

const char* Person::get_type() const
{
	return "Person";
}

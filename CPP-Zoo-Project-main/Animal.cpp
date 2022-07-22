#define  _CRT_SECURE_NO_WARNINGS
#include "Animal.h"

Animal::Animal(char* name, bool sex)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	this->sex = sex;
}

Animal::~Animal()
{
	if (name)
		delete[]name;
}

char* Animal::get_name() const
{
	return name;
}

bool Animal::operator==(const Animal& u)
{
	if (strcmp(this->get_type(), u.get_type()) == 0)
	{
		if (sex == u.sex)
		{
			cout << "The animals are from the same gender they cannot have sex" << endl;
			return 0;
		}
		else
		{
			cout << "The animals arent from the same gender they can have sex" << endl;
			return 1;
		}
	}

	else
	{
		if ((strcmp(this->get_type(), "Bull") == 0 && strcmp(u.get_type(), "Person") ==0)||(strcmp(this->get_type(), "Person") == 0 && strcmp(u.get_type(), "Bull")==0))
		{
			if (sex == u.sex)
			{
				cout << "The animals are from the same gender they So they cannot have a minotaur baby " << endl;
				return 0;
			}
			else
			{
				cout << "The animals are from the different gender they So they can have a minotaur baby " << endl;
				return 1;
			}
		}
	}
	cout <<"They cannot have a baby"<<endl;
	return 0;
}

const char* Animal::get_type() const
{
	return "Animal";
}


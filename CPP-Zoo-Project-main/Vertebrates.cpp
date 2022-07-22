#include "Vertebrates.h"

Vertebrates::Vertebrates(char* name, bool sex, bool blood):
	Animal(name, sex)
{
	this->blood = blood;
}

void Vertebrates::print() const
{
	cout << "The animal name is: " << name << endl;
	if (sex)
		cout << "The animal is Male" << endl;
	else
		cout << "The animal is Female" << endl;
	cout << "The animal is Vertebrates" << endl;
	if (blood)
		cout << "The animal has hot blood" << endl;
	else cout << "The animal has cold blood" << endl;
}

#include "Snake.h"

Snake::Snake(char* name, bool sex, bool blood, bool legs, int groundspeed, bool venom)
	:Reptiles(name, sex, blood, legs)
{
	this->groundspeed = groundspeed;
	this->venom = venom;
}

void Snake::print() const
{
	Reptiles::print();
	if (!venom)
		cout << "The snake doesnt have venom" << endl;
	else cout << "The snake does have venom" << endl;
	cout << "The speed of the snake is : " << groundspeed << endl;
}

const char* Snake::get_type() const
{
	return "Snake";
}

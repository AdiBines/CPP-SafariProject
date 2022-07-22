#pragma once
#include "Animal.h"
class Data
{
private:
	Animal** arr;
	int size;
public:
	Data() { size = 0; arr = NULL; }
	~Data() { if (arr) delete[]arr; }
	void operator+=(Animal* a);
	void operator-=(Animal* a);
	bool find_animal(char* a) const;
	void print_animal(char* a) const;
	int find_index(char* a) const;
	void init();
	void print_all() const;
	void print_welcome() const;
	bool yesno_insert();
};


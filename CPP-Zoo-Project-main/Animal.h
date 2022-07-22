#pragma once
#include <string.h>
#include <iostream>
using namespace std;
class Animal
{
protected:
	char* name;
	bool sex;
public:
	Animal(char* name, bool sex);
	virtual void print()const = 0 ;
	virtual ~Animal();
	char* get_name()const;
	virtual bool operator==(const Animal& u);
	virtual const char* get_type()const;
	





};
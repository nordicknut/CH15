#include "Staff.h"
#include <iostream>

Staff::Staff()
{
	cout << "Enter staff title: ";
	cin >> this->title;
}

string Staff::toString() const
{
	return "Staff: " + name;
}
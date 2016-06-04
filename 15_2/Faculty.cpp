#include "Faculty.h"
#include <iostream>

Faculty::Faculty()
{
	cout << "Enter office hours (i): ";
	cin >> this->officeHours;
	cout << "Enter rank (i): ";
	cin >> this->rank;
}

string Faculty::toString() const
{
	return "Faculty: " + name + "\n";
}
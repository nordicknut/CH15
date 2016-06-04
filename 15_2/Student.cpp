#include "Student.h"
#include <iostream>

Student::Student()
{
	cout << "Enter class level (0-3): ";
	cin >> this->classStatus;
}

string Student::toString() const
{
	return "Student: " + name;
}
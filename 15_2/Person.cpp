#include "Person.h"
#include <iostream>

Person::Person()
{
	cout << "Enter name: ";
	cin >> this->name;
	cout << "Enter address: ";
	cin >> this->address;
	cout << "Enter phone number: ";
	cin >> this->phoneNumber;
	cout << "Enter email address: ";
	cin >> this->emailAdress;
}

string Person::toString() const
{
	return "Person: " + name + "\n";
}
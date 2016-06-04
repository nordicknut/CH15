#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee()
{
	cout << "Enter office: ";
	cin >> this->office;
	cout << "Enter salary(d): ";
	cin >> this->salary;
	cout << "Enter date hired (y m d): ";
	int y, m, d;
	cin >> y >> m >> d;
	MyDate hireDate(y, m, d);
	this->dateHired = hireDate;
}

string Employee::toString() const
{
	return "Employee: " + name;
}
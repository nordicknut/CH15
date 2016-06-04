#pragma once
#include "Person.h"
#include "MyDate.h"

class Employee : public Person
{
private:
	string office;
	double salary;
	MyDate dateHired;

public:
	string toString() const;
	void setOffice(string office);
	string getOffice() const;
	void setSalary(double salary);
	double getSalary() const;
	void setDateHired(MyDate dateHired);
	MyDate getDateHired() const;
};
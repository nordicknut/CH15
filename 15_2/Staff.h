#pragma once
#include "Employee.h"

class Staff : public Employee
{
private:
	string title;
public:
	string toString() const;
	void setTitle(string title);
	string getTitle() const;
};

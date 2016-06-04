#pragma once
#include "Employee.h"

class Staff : public Employee
{
private:
	string title;
public:
	Staff();
	string toString() const;
	void setTitle(string title);
	string getTitle() const;
};

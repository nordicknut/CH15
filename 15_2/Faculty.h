#pragma once
#include "Employee.h"

class Faculty : public Employee
{
private:
	int officeHours;
	int rank;
public:
	Faculty();
	string toString() const;
	void setOfficeHours(int officeHours);
	int getOfficeHours() const;
	void setRank(int rank);
	int getRank() const;
};

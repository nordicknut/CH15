#pragma once
#include "Person.h"

class Student : public Person
{
private:
	int classStatus;//0-3, frosh, soph, jr, sr
public:
	void setClassStatus(int classStatus);
	int getClassStatus() const;
	string toString() const;
};
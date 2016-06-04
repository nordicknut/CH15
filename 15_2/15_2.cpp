// 15_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Faculty.h"
#include "Staff.h"
#include "Student.h"
#include <iostream>
#include <vector>

using namespace std;
//			Person
//		/			\
//	Employee		Student
//	/		\
//Faculty	Staff

int main()
{
	vector<Person> v;
	v.push_back(Person());
	v.push_back(Employee());
	v.push_back(Faculty());
	v.push_back(Staff());
	v.push_back(Student());

	for (size_t i = 0; i < v.size(); i++)
	{
		string temp = v.at(i).toString();
		cout << temp;
	}

    return 0;
}


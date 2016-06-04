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
	Student *b = new Student();
	cout << (*b).toString();

	vector<Person*> v;
	v.push_back(new Person());
	v.push_back(new Employee());
	v.push_back(new Faculty());
	v.push_back(new Staff());
	v.push_back(new Student());

	for (size_t i = 0; i < v.size(); i++)
	{
		cout << (*v.at(i)).toString();
	}

    return 0;
}


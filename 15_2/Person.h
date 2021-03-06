#pragma once
#include <string>
using namespace std;

class Person
{
protected:
	string name;
	string address;
	string phoneNumber;
	string emailAdress;
public:
	Person();
	void setName();
	string getName() const;
	void setAddres();
	string getAddress() const;
	void setPhoneNumber();
	string getPhoneNumber() const;
	void setEmailAddress();
	string getEmailAddress() const;
	virtual string toString() const;
};
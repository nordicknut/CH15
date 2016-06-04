#include "Account.h"
#include "..\15_2\MyDate.h"

Account::Account()
{
	this->balance = 0.0;
	this->annualInterestRate = 1.3;
	this->dateCreated = MyDate(2016, 6, 4);
}

Account::Account(double balance) : Account()
{
	this->balance = balance;
}
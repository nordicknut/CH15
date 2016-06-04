#pragma once
#include "..\15_2\MyDate.h"

class Account
{
private:
	int accountNumber;
	MyDate dateCreated;
protected:
	double balance;
	double annualInterestRate;
public:
	Account();
	Account(double deposit);
	void deposit(double amount);
	void withdraw(double amount);
};

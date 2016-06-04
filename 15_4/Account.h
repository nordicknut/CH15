#pragma once
#include "..\15_2\MyDate.h"
#include <string>

class Account
{
private:
	int accountNumber;
	MyDate dateCreated;
	static int accountsActive;
protected:
	double balance;
	double annualInterestRate;
public:
	Account();
	Account(double deposit);
	void deposit(double amount);
	void withdraw(double amount);
	virtual std::string toString() const;
	int getAccountNumber() const;
	static int getNewAccountNumber();
};

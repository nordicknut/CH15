#pragma once
#include "Account.h"
#include <iostream>

class CheckingAccount : public Account
{
public:
	std::string toString() const;
	void withdraw(double amount);
};

std::string CheckingAccount::toString() const
{
	std::string temp = "Checking account number: " + this->getAccountNumber();
	temp.append("\nBalance: ");
	temp.append(std::to_string(balance));
	return temp;
}

void CheckingAccount::withdraw(double amount)
{
	if (this->balance - amount < 0)
	{
		std::cout << "Overdrawn, additional $25.00 charge";
		this->balance -= amount;
		this->balance -= 25.00;
	}
	else
	{
		this->balance -= amount;
	}
}
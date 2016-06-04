#pragma once
#include "Account.h"
#include <string>
#include <iostream>

class SavingsAccount : public Account
{
public:
	std::string toString() const;
	void withdraw(double amount);
};

std::string SavingsAccount::toString() const
{
	std::string temp = "Savings account number: " + this->getAccountNumber();
	temp.append("\nBalance: ");
	temp.append(std::to_string(balance));
	return temp;
}

void SavingsAccount::withdraw(double amount)
{
	if (this->balance - amount < 0)
	{
		std::cout << "Insufficient funds, transation canceled.";
	}
	else
	{
		this->balance -= amount;
	}
}
#pragma once
#include "Account.h"
#include <string>
#include <iostream>

class SavingsAccount : public Account
{
public:
	SavingsAccount();
	SavingsAccount(double deposit);
	std::string toString() const;
	void withdraw(double amount);
};

SavingsAccount::SavingsAccount() : Account()
{
	this->Account::Account();
}

SavingsAccount::SavingsAccount(double deposit) : Account(deposit)
{
	this->Account::Account(deposit);
}

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
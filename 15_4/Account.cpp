#include "Account.h"
#include "..\15_2\MyDate.h"
#include <string>

int Account::accountsActive = 0;

Account::Account()
{
	this->balance = 0.0;
	this->annualInterestRate = 1.3;
	this->dateCreated = MyDate(2016, 6, 4);
	Account::accountsActive++;
	this->accountNumber = Account::getNewAccountNumber();
}

Account::Account(double balance) : Account()
{
	this->balance = balance;
}

std::string Account::toString() const
{
	std::string temp = "Account number: ";
	temp.append(std::to_string(accountNumber));
	temp.append("\tBalance: ");
	temp.append(std::to_string(balance));
	return temp;
}

int Account::getAccountNumber() const
{
	return this->accountNumber;
}

int Account::getNewAccountNumber()
{
	return Account::accountsActive;
}
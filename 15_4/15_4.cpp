// 15_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include <iostream>

int main()
{
	Account a1;
	Account a2(1000.0);
	CheckingAccount c1;
	CheckingAccount c2(2000.0);
	SavingsAccount s1;
	SavingsAccount s2(3000.0);
 

	a1.toString();
	a2.toString();


    return 0;
}


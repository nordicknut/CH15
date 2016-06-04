// 15_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include <iostream>
using namespace std;

int main()
{ 
	Account a1;
	Account a2(1000.0);
	CheckingAccount c1;
	CheckingAccount c2(2000.0);
	SavingsAccount s1;
	SavingsAccount s2(3000.0);
 

	cout << a1.toString() << endl;
	cout << a2.toString() << endl;
	cout << c1.toString() << endl;
	cout << c2.toString() << endl;
	cout << s1.toString() << endl;
	cout << s2.toString() << endl;

    return 0;
}


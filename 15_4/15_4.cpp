// 15_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Account.h"


int main()
{
	Account a1;
	Account a2(1000.0);

	a1.toString();
	a2.toString();


    return 0;
}


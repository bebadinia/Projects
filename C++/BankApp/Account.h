#include<iostream>

using namespace std;

class Account
{
	string name;
	double balance{ 0 };

public:

	account(string accountName, double accountBalance) :name{accountName}
	{
		if(accountBalance >= 0)
		{
			balance = accountBalance;
		}
		else
		{
			cout << "ERROR: the balance value must be >= $0 \n";
		}
	}


	double getBalance()
	{
		return balance;
	}

	void setName(string accountName) const //const means the function should not change my object
	{
		name = accountName;
	}

	string getName()
	{
		return name;
	}

}; // the end of my class#pragma once

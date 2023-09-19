#include<iostream>
#include"Account.h"

using namespace std;

int main()
{
	account myAccount; //myAccount is an object/instance from the class Account
	myAccount.setBalance(100);
	myAccount.setName("Joyce White");

	cout << "The balance of my account object = " myAccount.getBalance() << endl;
	cout << "The name of my account object = " myAccount.getName() << endl;



	return 0;
}

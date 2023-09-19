#include<string>
#include "Date.h"

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


using namespace std;

class Employee
{
public:
	Employee( const string& first, const string& last, const Date& dateofBirth, const Date& dateofHire );
	~Employee();
	string toString();
private:
	string firstName;
	string lastName;
	Date birthDate;
	Date hireDate;


};

#endif // !EMPLOYEE_H
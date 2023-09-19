#include "Employee.h"
#include<sstream>

Employee::Employee(const string& first, const string& last, const Date& dateofBirth, const Date& dateofHire) : firstName{ first }, lastName{ last }, birthDate{ dateofBirth }, hireDate{ dateofHire }
{

}

string Employee::toString()
{
	ostringstream out;
	out << firstName << ", " << lastName << "/" << setw(2) << setw(4) << year;
	return out.str;
}

Employee :: ~Employee()
{

}
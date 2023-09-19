#include"Date.h"
#include<array>
#include<stdexcept>
#include<iomanip>
#include<sstream>

Date::Date(unsigned int m, unsigned int d, unsigned int y)
{
	if (m >= 1 && m <= 12)
	{
		month = m;
	}
	day = checkDay(d);
	year = y;
}

unsigned int Date::checkDay(unsigned int testDay)
{
	array<unsigned int, numberofMonths + 1> daysinMonths{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (testDay >= 1 && testDay <= daysinMonths[month])
	{
		return testDay;
	}
	else if (testDay == 29 && year % 4 == 0 && month == 2)
	{
		return testDay;
	}
	else
		throw invalid_argument("Invalid argument in the date");
}

string Date::toString()
{
	ostringstream out;
	out << setfill('0') << setw(2) << month << "/" << setw(2) << setw(4) << year;
	return out.str;
}

Date :: ~Date()
{

}
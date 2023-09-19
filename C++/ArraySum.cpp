#include<iostream>
#include<array>

using namespace std;

int main()
{

	const size_t arraySize{ 5 };

	array<int, arraySize>numbers;
	int total{ 0 };

	cout << "Please enter " << arraySize << " numbers: " << endl;

	for (size_t i{ 0 }; i < numbers.size(); i++)
	{
		cin >> numbers[i];
		total += numbers[i];
	}

	cout << endl;
	cout << total;

	return 0;
}

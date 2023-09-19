#include<iostream>
#include<iomanip>

using namespace std;

int arraySum(int arr[], int size);
int arraySum2(int* arr, int size);

int main()
{
	const int arraySize{ 5 };
	int numbers[arraySize]{ 1, 2, 3, 4, 5 };
	cout << "Total using numbers[] = " << arraySum(numbers, arraySize) << endl;
	cout << "Total using pointers = " << arraySum2(numbers, arraySize) << endl;
	cout << "===================================================\n";
	cout << numbers << endl;

	return 0;
}

int arraySum(const int arr[], int size)
{
	int total{ 0 };
	for (int i = 0; i < size; i++)
	{
		total += arr[i];
	}
	return total;
}

int arraySum2(const int* arr, int size)
{
	int total{ 0 };
	for (int i = 0; i < size; i++)
	{
		total += arr[i];
	}
	return total;
}
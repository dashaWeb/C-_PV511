#include <iostream>
#include <ctime>
using namespace std;


int main()
{
	srand(time(0));
	const int SIZE = 7;
	int arr[SIZE];
	for (size_t i = 0; i < SIZE; i++)
	{
		//arr[i] = 11;
		//cin >> arr[i];
		//arr[i] = rand() % 10 + 1; // 1 2 3 .. 10 
		// rand() % (max - min + 1) + min;
		arr[i] = rand() % (20 - 5 + 1) + 5; // [5, 20] (0 .. 15), (5 ... 20)
	}
	cout << "Print Array :: \t ";
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;


	int arr2[]{ 1,2,3,4,5,6,33};
	cout << "" << sizeof(arr2) / sizeof(arr2[0]) << endl;
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	cout << "Print Array2 :: \t";
	for (size_t i = 0; i < size2; i++)
	{
		cout << arr2[i] << "\t";
	}
	cout << endl;


	cout << "Print Reverse array :: \t";
	for (int i = size2 - 1; i >= 0; i--)
	{
		cout << arr2[i] << "\t";
	}
	cout << endl;
}


#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	//pow(2, 4);
	srand(time(0));
	const int SIZE = 10;
	int arr[SIZE]{};

	// Unique array
	for (size_t i = 0; i < SIZE; )
	{
		int flag = true;
		int number = rand() % 10 + 1;;
		for (size_t j = 0; j < i; j++)
		{
			if (arr[j] == number) {
				flag = false;
				break;
			}
		}
		if (flag) {
			arr[i] = number;
			i++;
		}

	}
	cout << "\n-------- Bubble Sorted ---------" << endl;
	// print array
	cout << "Print Array  :: ";
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;

	// bubble sort
	for (size_t j = 0; j < SIZE - 1; j++)
	{
		for (size_t i = 0; i < SIZE - 1 - j; i++)
		{
			if (arr[i] > arr[i + 1]) {
				/*int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;*/
				swap(arr[i], arr[i + 1]);
			}
		}
	}


	// print array
	cout << "Sorted Array :: ";
	
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;



	// Unique array
	for (size_t i = 0; i < SIZE; )
	{
		int flag = true;
		int number = rand() % 10 + 1;;
		for (size_t j = 0; j < i; j++)
		{
			if (arr[j] == number) {
				flag = false;
				break;
			}
		}
		if (flag) {
			arr[i] = number;
			i++;
		}
	}

	// print array
	cout << "\n-------- Insert Sorted ---------" << endl;
	cout << "Print Array  :: ";
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;

	// insert sort
	for (size_t i = 1; i < SIZE; i++)
	{
		int pivot = arr[i];
		int j = i - 1;
		while (j >= 0 and pivot < arr[j]) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = pivot;
	}


	// print array
	cout << "Sorted Array :: ";

	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;







}






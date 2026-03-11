#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	const int row = 4;
	const int col = 5;

	int arr[row][col]{};
	//arr[0][0] = rand() % 20 + 1;
	//arr[0][1] = rand() % 20 + 1;
	//arr[0][2] = rand() % 20 + 1;
	//arr[0][3] = rand() % 20 + 1;
	//arr[0][4] = rand() % 20 + 1;
	// fill array
	for (size_t j = 0; j < row; j++) // rows
	{
		for (size_t i = 0; i < col; i++) // cols
		{
			arr[j][i] = rand() % 20 + 1;
		}
	}
	//print array
	for (size_t j = 0; j < row; j++) // rows
	{
		for (size_t i = 0; i < col; i++)
		{
			cout << arr[j][i] << "\t";
		}
		cout << endl;
	}

	int arr2[][col]
	{
		{1,2,5,3},
		{4,5,8,9},
		{1,5,9,8,7},
		{1,2}
	};
	//print array
	cout << "\n Print Array :: " << endl;
	cout << sizeof(arr2) / sizeof(arr[0]) << endl;
	for (size_t j = 0; j < sizeof(arr2) / sizeof(arr[0]); j++) // rows
	{
		for (size_t i = 0; i < col; i++)
		{
			cout << arr2[j][i] << "\t";
		}
		cout << endl;
	}

	const int ROW = 4, COL = 5, BLOCK = 3;
	int arr3[][ROW][COL]
	{
		{
			{1,2,3},
			{4,5,6},
			{7,8,9}
		},
		{
			{1,2,3},
			{4,5,6},
			{7,8,9}
		},
		{}
	};
	for (size_t q = 0; q < BLOCK; q++)
	{
		for (size_t i = 0; i < ROW; i++)
		{
			for (size_t j = 0; j < COL; j++)
			{
				arr3[q][i][j] = rand() % 10 + 1;
			}
		}
		
	}
	//cout << arr3[0][1][1] << endl;
	cout << "\nPrint 3D Array :: \n";
	for (size_t q = 0; q < BLOCK; q++)
	{
		for (size_t i = 0; i < ROW; i++)
		{
			for (size_t j = 0; j < COL; j++)
			{
				cout << arr3[q][i][j] << "\t";
			}cout << endl;
		}
		cout << endl;
	}

	const int SIZE = 5;
	int arr_4[SIZE][SIZE];
	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE; j++)
		{
			arr_4[i][j] = rand() % 10 + 1;
		}
	}

	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE; j++)
		{
			cout << arr_4[i][j] << "\t";
		}
		cout << endl;
	}
	int sum = 0;
	int sum_2 = 0;
	
	for (size_t i = 0; i < SIZE; i++)
	{
		sum += arr_4[i][i];
		sum_2 += arr_4[i][SIZE - 1 - i]; 

	}
	cout << "Result sum main diagonal :: " << sum << endl;
	cout << "Result sum main diagonal :: " << sum_2 << endl;



}



#include "linked.h"
#include "library_array.h"
#include <ctime>

int main()
{
	srand(time(0));
	int row = 4, col = 3;
	int** arr = nullptr;
	create(arr, row, col);
	fill(arr, row, col);
	print(arr, row, col, "Print Array");

	insert(arr, row, col, 2);
	print(arr, row, col, "Print Array after insert");
	popBack(arr, row);
	print(arr, row, col, "Print Array after pop back");




	delete_(arr, row);
	if (arr == nullptr)
		cout << "Array is empty" << endl;



	//int row = 4, col = 5;
	///*arr[0] = new int[col];
	//arr[1] = new int[col];
	//arr[2] = new int[col];*/
	////create array
	//int** arr = new int* [row];
	//for (size_t i = 0; i < row; i++)
	//{
	//	arr[i] = new int[col];
	//}
	//// fill and print array
	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		arr[i][j] = rand() % 10 + 1;
	//		cout << arr[i][j] << "\t";
	//	}
	//	cout << endl;
	//}

	//// delete array
	//for (size_t i = 0; i < row; i++)
	//{
	//	delete[]arr[i];
	//}
	//delete []arr;
	//arr = nullptr;
	//int block = 3, row = 4, col = 5;
	//int*** arr = new int** [block];
	//for (int i = 0; i < block; i++)
	//{
	//	arr[i] = new int* [row];
	//	for (size_t j = 0; j < row; j++)
	//	{
	//		arr[i][j] = new int[col];
	//	}
	//}
	//for (size_t i = 0; i < block; i++)
	//{
	//	for (size_t j = 0; j < row; j++)
	//	{
	//		for (size_t q = 0; q < col; q++)
	//		{
	//			arr[i][j][q] = rand() % 10;
	//			cout << arr[i][j][q] << "\t";
	//		}
	//		cout << endl;
	//	}
	//	cout << "\n -------------- \n";
	//}
	//for (size_t i = 0; i < block; i++)
	//{
	//	for (size_t j = 0; j < row; j++)
	//	{
	//		delete[] arr[i][j]; // delete column
	//	}
	//	delete[]arr[i]; // delete row
	//}
	//delete[] arr; // delete block
}



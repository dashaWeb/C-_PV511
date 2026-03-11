#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;

enum KeyCode
{
	UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77, ESC = 27
};

int main()
{
	srand(time(0));

	/*Необхідно відсортувати перші дві третини масиву в порядку зростання, якщо середнє арифметичне всіх елементів більше нуля; в іншому разі — лише першу третину.Іншу частину масиву не сортувати, а розташувати у зворотному порядку.*/

	//const int SIZE = 15;
	//int arr[SIZE]{};
	//int min = -10, max = 10;
	//// Fill array
	//for (size_t i = 0; i < SIZE; i++)
	//{
	//    arr[i] = rand() % (max - min + 1) + min;
	//}
	//// Print array
	//for (size_t i = 0; i < SIZE; i++)
	//{
	//    cout << arr[i] << "\t";
	//}cout << endl;

	//int sum = 0;
	//for (size_t i = 0; i < SIZE; i++)
	//{
	//    sum += arr[i];
	//}
	//int middle;
	//if (sum > 0)
	//    middle = SIZE / 3 * 2; // 2/3
	//else
	//    middle = SIZE / 3; // 1/3

	//for (size_t i = 0; i < SIZE; i++)
	//{
	//    if (i == middle)
	//        cout << " |  ";
	//    cout << arr[i] << "\t";
	//}cout << endl;

	//// sorted
	//for (size_t i = 0; i < middle - 1; i++)
	//{
	//    for (size_t j = 0; j < middle - 1 - i; j++)
	//    {
	//        if (arr[j] > arr[j + 1])
	//            swap(arr[j], arr[j + 1]);
	//    }
	//}
	////Reverse
	//int start = middle;
	//int end = SIZE - 1;
	//while (start < end)
	//{
	//    swap(arr[start++], arr[end--]);
	//    /*start++;
	//    end--;*/
	//}

	//for (size_t i = 0; i < SIZE; i++)
	//{
	//    if (i == middle)
	//        cout << " |  ";
	//    cout << arr[i] << "\t";
	//}cout << endl;


	/*Створіть двовимірний масив.Заповніть його випадковими числами та покажіть на екран.Користувач обирає
		кількість зсувів і положення(ліворуч, праворуч, вгору, вниз).Виконати зсув масиву і показати на екран
		отриманий результат.Зсув циклічний.*/

		//const int row = 3, col = 5;
		//int arr[row][col]{};
		//// Fill array
		//for (size_t i = 0; i < row; i++)
		//{
		//	for (size_t j = 0; j < col; j++)
		//	{
		//		arr[i][j] = rand() % 10;
		//	}
		//}

		////print array
		//for (size_t i = 0; i < row; i++)
		//{
		//	for (size_t j = 0; j < col; j++)
		//	{
		//		cout << arr[i][j] << "\t";
		//	}cout << endl;
		//}
		//cout << "\n\n";

		//// offset right
		//size_t last;
		//int offset = 6;
		//for (size_t q = 0; q < offset % col; q++)
		//{

		//}
		//

		////print array
		//for (size_t i = 0; i < row; i++)
		//{
		//	for (size_t j = 0; j < col; j++)
		//	{
		//		cout << arr[i][j] << "\t";
		//	}cout << endl;
		//}
		//cout << "\n\n";

	const int row = 3, col = 5;
	int arr[row][col]{};
	// Fill array
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}cout << endl;
	}
	int key;
	while ((key = _getch()) != ESC)
	{
		system("cls");
		switch (key)
		{
		case RIGHT: {
			for (size_t i = 0; i < row; i++)
			{
				int last = arr[i][col - 1];
				for (size_t j = col - 1; j > 0; j--)
				{
					arr[i][j] = arr[i][j - 1];
				}
				arr[i][0] = last;
			}
			break;
		}
		case LEFT: {
			for (size_t i = 0; i < row; i++)
			{
				int first = arr[i][0];
				for (size_t j = 0; j < col - 1; j++)
				{
					arr[i][j] = arr[i][j + 1];
				}
				arr[i][col-1] = first;
			}
			break;
		}
		case UP:
		{
			for (size_t i = 0; i < col; i++)
			{
				int first = arr[0][i];
				for (size_t j = 0; j < row - 1; j++)
				{
					arr[j][i] = arr[j+1][i];
				}
				arr[row-1][i] = first;
			}
			break;
		}
		case DOWN:
		{
			for (size_t i = 0; i < col; i++)
			{
				int last = arr[row-1][i];
				for (size_t j = row - 1; j > 0; j--)
				{
					arr[j][i] = arr[j-1][i];
				}
				arr[0][i] = last;
			}
			break;
		}
		}

		for (size_t i = 0; i < row; i++)
		{
			for (size_t j = 0; j < col; j++)
			{
				cout << arr[i][j] << "\t";
			}cout << endl;
		}
	}


}


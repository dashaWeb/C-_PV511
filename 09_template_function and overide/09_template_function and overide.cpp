#include <iostream>
#include <ctime>
using namespace std;



//void print(int a, int b)
//{
//    cout << "first :: " << a << "\t second :: " << b << endl;
//}
//void print(int a, double b)
//{
//    cout << "first :: " << a << "\t second :: " << b << endl;
//}
//void print(double a, double b)
//{
//    cout << "first :: " << a << "\t second :: " << b << endl;
//}
//
//void print(char a, char b)
//{
//    cout << "first :: " << a << "\t second :: " << b << endl;
//}
//void print(string a, string b)
//{
//    cout << "first :: " << a << "\t second :: " << b << endl;
//}
//void print(bool a, bool b, bool c)
//{
//    cout << "first :: " << a << "\t second :: " << b << endl;
//}
//
//void fillArray(int arr[], int size, int min = 1, int max = 10)
//{
//    for (size_t i = 0; i < size; i++)
//    {
//        arr[i] = rand() % (max - min + 1) + min;
//    }
//}
//void fillArray(char arr[], int size, int min = 1, int max = 10)
//{
//    for (size_t i = 0; i < size; i++)
//    {
//        arr[i] = rand() % (max - min + 1) + min;
//    }
//}
//void fillArray(double arr[], int size, int min = 1, int max = 10)
//{
//    for (size_t i = 0; i < size; i++)
//    {
//        arr[i] = (rand() % (max - min + 1) + min) / 3.0;
//    }
//}
//void printArray(int arr[], int size, string prompt = "")
//{
//    cout << (prompt.empty() ? "" : prompt + " :: \t");
//    for (size_t i = 0; i < size; i++)
//    {
//        cout << arr[i] << "\t";
//    }
//    cout << endl;
//}
//void printArray(char arr[], int size, string prompt = "")
//{
//    cout << (prompt.empty() ? "" : prompt + " :: \t");
//    for (size_t i = 0; i < size; i++)
//    {
//        cout << arr[i] << "\t";
//    }
//    cout << endl;
//}
//void printArray(double arr[], int size, string prompt = "")
//{
//    cout << (prompt.empty() ? "" : prompt + " :: \t");
//    for (size_t i = 0; i < size; i++)
//    {
//        cout << arr[i] << "\t";
//    }
//    cout << endl;
//}

template<typename T, typename T2>
void print(T a, T2 b) {
	cout << "first :: " << a << "\t second :: " << b << endl;
}

template<typename T>
void print(T a, T b, T c) {
	cout << "first :: " << a << "\t second :: " << b << "\t third :: " << c << endl;
}

template<typename T, typename T2>
auto sum(T a, T2 b)
{
	return a + b;
}
template <typename T>
void fillArray(T arr[], int size, int min = 1, int max = 10)
{
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = (rand() % (max - min + 1) + min);
    }
}

void fillArray(double arr[], int size, int min = 1, int max = 10)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = (rand() % (max - min + 1) + min) / 3.0;
	}
}

template <typename T>
void printArray(T arr[], int size, string prompt = "")
{
    cout << (prompt.empty() ? "" : prompt + " :: \t");
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}


template<typename T, int COL>
void fillArray(T arr[][COL], int row, int col, int min = 0, int max = 10)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % (max - min + 1) + min;
		}
	}
}

template<typename T, int COL>
void printArray(T arr[][COL], int row, int col, string prompt = "")
{
	cout << (prompt.empty() ? "" : prompt + " :: \n");
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	srand(time(0));
	{
		//print(2, 5);
		//print(2.5, 5.9);
		//print('a', 'b');
		//print("Hello", "World");
		//print(true, false);
		//print(2, 3.5);
		////print(1, 2, 3);
		//const int SIZE = 10, SIZE2 = 15;
		//int arr[SIZE]{};
		//fillArray(arr, SIZE);
		//printArray(arr, SIZE, "Print Array");
		//int arr2[SIZE2];
		//fillArray(arr2, SIZE2);
		//printArray(arr2, SIZE2,"print");

		//char arr_char[SIZE];

		//fillArray(arr_char, SIZE, 'a', 'z');
		//printArray(arr_char, SIZE);

		//double arr_double[SIZE];
		//fillArray(arr_double, SIZE);
		//printArray(arr_double, SIZE);
	}

	print(2, 3);
	print(2.5, 3.8);
	print('a', 'b');
	string first = "Hello", second = "Template function";
	print(first, second);
	print(5, 8, 9);
	print(5.6, 8.5, 9.8);

	print(2, 5.5);
	cout << sum(2, 2.5) << endl;

	//auto number = true;
	const int size = 10;
	int arr_int[size];
	double arr_double[size];
	char arr_char[size];

	fillArray(arr_int, size);
	fillArray(arr_double, size);
	fillArray(arr_char, size, 'A','Z');

	printArray(arr_int, size,"Print array int");
	printArray(arr_double, size, "Print array double");
	printArray(arr_char, size, "Print array char");

	char arr2D[3][7];
	fillArray(arr2D, 3, 7, 'a','z');
	printArray(arr2D, 3, 7);
}



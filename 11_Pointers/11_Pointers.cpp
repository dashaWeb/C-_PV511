#include <iostream>
using namespace std;


//void Swap(int* a, int* b)
//{
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}


void Swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	int a = 5;
	int b = 7;
	cout << "Before --> \t a = " << a << "\t b = " << b << endl;
	Swap(a, b);
	cout << "After  --> \t a = " << a << "\t b = " << b << endl;

	/*int* ptr_a = &a;
	cout << "value variable :: " << a << "\t address :: " << ptr_a << "\t --> " << *ptr_a << endl;
	*ptr_a = 10;
	cout << "value variable :: " << a << "\t address :: " << ptr_a << "\t --> " << *ptr_a << endl;*/

	int arr[10]{ 1,10,11,12,13,14,15,16,17,18 };
	int* ptr = arr;
	/*cout << "Address :: " << ptr + 0 << "\t Value :: " << *ptr << endl;
	cout << "Address :: " << ptr + 1 << "\t Value :: " << *(ptr + 1) << endl;
	cout << "Address :: " << ptr + 2 << "\t Value :: " << *(ptr + 2) << endl;
	cout << "Address :: " << ptr + 3 << "\t Value :: " << *(ptr + 3) << endl;
	cout << "Address :: " << ptr + 4 << "\t Value :: " << *(ptr + 4) << endl;*/
	/*cout << "Address :: " << ptr << "\t Value :: " << *ptr << endl;
	ptr++;
	cout << "Address :: " << ptr << "\t Value :: " << *ptr++ << endl;
	cout << "Address :: " << ptr << "\t Value :: " << *ptr++ << endl;*/

	/*for (size_t i = 0; i < 10; i++, ptr++)
	{
		cout << i + 1 <<  ". Address :: " << ptr << "\t Value :: " << *ptr << endl;
	}
	for (size_t i = 0; i < 10; i++)
	{
		--ptr;
		cout << i + 1 << ". Address :: " << ptr << "\t Value :: " << *ptr << endl;
	}*/

	for (size_t i = 0; i < 10; i++)
	{
		cout << *(ptr + i) << "\t "; // arr[i]
	}
	cout << endl;

}



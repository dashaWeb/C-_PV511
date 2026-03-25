
#include <iostream>
#include <ctime>
#include "library.h"
using namespace std;

// rev(12345)  ==> 12345 % 10 -> 5 
// rev(1234) ==> 1234 % 10 -> 4

//void reversed(int n)
//{
//    if (n == 0) {
//        cout << endl;
//        return;
//    }
//    cout << n % 10;
//    reversed(n / 10);
//}
int main()
{
    //reversed(12345);
    /*int size;
    cout << "Enter size array :: ";
    cin >> size;
    int* ptr = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        ptr[i] = rand() % 10;
        cout << ptr[i] << "\t";
    }
    cout << endl;

    delete []ptr;*/
    srand(time(0));
    int* ptr = nullptr;
    int size = 10;
    ptr = createArray(size);
    fillArray(ptr, size);
    printArray(ptr, size, "Print array   ");

    pushBack(ptr, size, 333);
    printArray(ptr, size, "Print pushBack");
    insert(ptr, size, 77, 2);
    printArray(ptr, size, "Print insert  ");
    popFront(ptr, size);
    printArray(ptr, size, "Print popFront");

    pushFront(ptr, size, 555);
    printArray(ptr, size, "Print pushFront");

    popBack(ptr, size);
    printArray(ptr, size, "Print popBack");

    remove(ptr, size, 2);
    printArray(ptr, size, "Print remove ");


    deleteArray(ptr);
    if (ptr == nullptr)
        cout << "Array is empty" << endl;
    else
        printArray(ptr, size, "Print delete array");
}

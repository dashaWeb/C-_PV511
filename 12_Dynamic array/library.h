#pragma once
#include <iostream>
using std::cout;
using std::string;





//Функція розподілу динамічної пам'яті.
int* createArray(int size);
//Функція ініціалізації динамічного масиву.
void fillArray(int* arr, int size, int min = 1, int max = 10);
//Функція друку динамічного масиву.
void printArray(int* arr, int size, string prompt = "");
//Функція видалення динамічного масиву.
void deleteArray(int*& arr);
//Функція додавання елемента в кінець масиву.
void pushBack(int*& arr, int& size, int value);
//Функція додавання елемента на початок масиву.
void pushFront(int*& arr, int& size, int value);
//Функція вставки елемента за вказаним індексом.
void insert(int*& arr, int& size, int value, int index);
//Функція видалення елемента на початку масиву.
void popFront(int*& arr, int& size);
//Функція видалення елемента за вказаним індексом.
void remove(int*& arr, int& size, int index);
//Функція видалення елемента в кінці масиву.
void popBack(int*& arr, int& size);
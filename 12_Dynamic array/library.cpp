#include "library.h"

int* createArray(int size)
{
	return new int[size];
}

void fillArray(int* arr, int size, int min, int max)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}

void printArray(int* arr, int size, string prompt)
{
	cout << (prompt.empty() ? "" : prompt + ": \t");
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << std::endl;
}

void deleteArray(int*& arr)
{
	delete[] arr;
	arr = nullptr;
}

void pushBack(int*& arr, int& size, int value)
{
	int* tmp = new int[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[size] = value;
	delete[]arr;
	arr = tmp;
	size++;
}

void pushFront(int*& arr, int& size, int value)
{
	int* tmp = new int[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		tmp[i + 1] = arr[i];
	}
	tmp[0] = value;
	delete[]arr;
	arr = tmp;
	size++;
}

void insert(int*& arr, int& size, int value, int index)
{
	int* tmp = new int[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		if (i < index)
			tmp[i] = arr[i];
		else
			tmp[i + 1] = arr[i];
	}
	tmp[index] = value;
	delete[] arr;
	arr = tmp;
	size++;
}

void popFront(int*& arr, int& size)
{
	int* tmp = new int[--size];
	for (size_t i = 0; i < size; i++)
	{
		tmp[i] = arr[i + 1];
	}
	delete[] arr;
	arr = tmp;
}

void remove(int*& arr, int& size, int index)
{
	int* tmp = new int[--size];
	for (size_t i = 0; i < size; i++)
	{
		if (i < index)
			tmp[i] = arr[i];
		else
			tmp[i] = arr[i + 1];
	}
	delete[]arr;
	arr = tmp;
}

void popBack(int*& arr, int& size)
{
	int* tmp = new int[--size];
	for (size_t i = 0; i < size; i++)
	{
		tmp[i] = arr[i];
	}
	delete[] arr;
	arr = tmp;
}

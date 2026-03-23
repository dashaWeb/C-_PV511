#pragma once
#include "linked.h"

// create
template <typename T>
void create(T** &arr, const int& row, const int& col);
// fill
template <typename T>
void fill(T** arr, const int& row, const int& col, const int& min = 0, const int& max = 10);
// print
template <typename T>
void print(T** arr, const int& row, const int& col, const string& prompt = "");
// delete
template<typename T>
void delete_(T**& arr, const int& row);


// add row to the begin
// add row to the end
// add row by index
template <typename T>
void insert(T**& arr, int& row, const int& col, const int& index);
// 
// delete row to the begin
// delete row to the end
template <typename T>
void popBack(T**& arr, int& row);
// delete row by index






template<typename T>
inline void create(T** &arr, const int& row, const int& col)
{
	arr = new T * [row];
	for (size_t i = 0; i < row; i++)
	{
		arr[i] = new T[col];
	}
}

template<typename T>
inline void fill(T** arr, const int& row, const int& col, const int& min, const int& max)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % (max - min + 1) + min;
		}
	}
}

template<typename T>
inline void print(T** arr, const int& row, const int& col, const string& prompt)
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

template<typename T>
inline void delete_(T**& arr, const int& row)
{
	for (size_t i = 0; i < row; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
}

template<typename T>
inline void insert(T**& arr, int& row, const int& col, const int& index)
{
	if (index < 0 or index > row) {
		cout << "Error index" << endl;
		return;
	}
	T** tmp = new T * [row + 1];
	for (size_t i = 0; i < row; i++)
	{
		if (i < index)
			tmp[i] = arr[i];
		else
			tmp[i + 1] = arr[i];
	}
	tmp[index] = new T[col]{};
	delete[] arr;
	arr = tmp;
	row++;
}

template<typename T>
inline void popBack(T**& arr, int& row)
{
	T** tmp = new T * [--row];
	for (size_t i = 0; i < row; i++)
	{
		tmp[i] = arr[i];
	}
	delete[] arr[row];
	delete[] arr;
	arr = tmp;
}

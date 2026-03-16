#include <iostream>
using namespace std;


template <typename T>
void uniqueValue(T arr[], int size, int min = 1, int max = 10)
{
	
	for (size_t i = 0; i < size;)
	{
		bool flag = true;
		T number = rand() % (max - min + 1) + min;
		for (size_t j = 0; j < i; j++)
		{
			if (arr[j] == number) {
				flag = false;
				break;
			}
		}
		if (flag)
		{
			arr[i] = number;
			i++;
		}
	}
}

template <typename T>
void print(T arr[], int size, string prompt = "")
{
	cout << (prompt.empty() ? "" : prompt + " :: \t");
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template <typename T>
void quickSort(T arr[], int left, int right)
{
	auto tmp_left = left;
	auto tmp_right = right;
	T pivot = arr[left];
	while (left < right)
	{
		while (arr[right] > pivot and left < right) right--;
		if (left != right) {
			arr[left] = arr[right];
			left++;
		}
		while (arr[left] < pivot and left < right)left++;
		if (left != right) {
			arr[right] = arr[left];
			right--;
		}
	}
	arr[left] = pivot;
	auto index = left;
	left = tmp_left;
	right = tmp_right;

	if (index > left)
	{
		quickSort(arr, left, index - 1);
	}
	if (index < right)
	{
		quickSort(arr, index + 1, right);
	}
}

template <typename T>
int searchBinary(int arr[], int left, int right, T key)
{
	if (left > right) return -1;
	int middle = (left + right) / 2;
	if (arr[middle] == key) return middle;
	if (key < arr[middle])
	{
		searchBinary(arr, left, middle - 1, key);
	}
	else if(key > arr[middle])
	{
		searchBinary(arr, middle + 1, right, key);
	}
}

int main()
{
	const int size = 10;
	int arr[size]{};
	uniqueValue(arr, size);
	print(arr, size, "Print before");
	quickSort(arr, 0, size - 1);
	print(arr, size, "Print after ");
	int value;
	cout << "Enter value :: ";
	cin >> value;
	cout << "Find value " << value << " has index " << searchBinary(arr, 0, size - 1, value) << endl;
}



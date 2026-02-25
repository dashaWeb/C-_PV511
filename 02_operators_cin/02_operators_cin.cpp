#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// Унарний оператор
	/*
		-a
		a++
		b--
		--a
		++b
		!a
	*/
	// Бінарний оператор
	/*
		a + b
		a - b
		a * b
		a / b
		a % b
		a == b
		a != b
		a > b
		a < b
		a >= b
		a <= b
		and - &&
		or  - ||
	*/

	// Тернарний оператор
	// a ? b : c

	// Priority
	/*
		()
		--b
		++a
		%
		*
		/
		+
		-
		a++
		b--
	*/

	int a = 5;
	int b = 2;
	double res = (double)a / b;

	/*cout << "Enter first number :: ";
	cin >> a;
	cout << "Enter second number :: ";
	cin >> b;*/

	cout << "Enter numbers :: ";
	cin >> a >> b;
	

	cout << a << " + " << b << " = " << a + b << endl; // 7
	cout << a << " - " << b << " = " << a - b << endl; // 3
	cout << a << " * " << b << " = " << a * b << endl; // 10
	cout << a << " / " << b << " = " << (double)a / b << endl; // 2.5? --> 2
	cout << a << " % " << b << " = " << a % b << endl; // 1
	cout << a << " == " << b << " = " << boolalpha << (a == b) << endl; // false {0}
	cout << a << " > " << b << " = " << boolalpha << (a > b) << endl; // true {1}
	cout << a << " < " << b << " = " << boolalpha << (a < b) << endl; // false
	cout << a << " != " << b << " = " << boolalpha << (a != b) << endl; // true
	cout << a << " >= " << b << " = " << boolalpha << (a >= b) << endl; // true
	cout << a << " <= " << b << " = " << boolalpha << (a <= b) << endl; // false

	cout << "Result a++ :: " << a++ << endl; // 5
	cout << "Result a++ :: " << a << endl; // 6
	cout << "Result a++ :: " << ++a << endl; // 7
	// a = 7, b = 2;
	int result = a + b - --a + b++ * a; // {57 M}, {14 - V, I, A, M, U},{18 - N}, {10 - D} 
	/*
		1. (--a){7} --> a = 6
		2. (b){2} * a{6} --> 12
		3. a{6} + b{2} -> 8
		4. 8 - 6 --> 2
		5. 2 + 12 -> 14
	*/
	
	cout << result << endl;
	cout << b << endl;
	int cond = (b > 0 and b < 20);
	cout << cond  << endl;
	cout << (bool)123 << endl;
	cout << (bool)0 << endl;
	int number;
	//cout << number << endl;
	cout << "Enter number :: ";
	cin >> number;

	cout << "Result :: " << number << endl;

	/*Користувач вводить номер року.Необхідно написати програму, яка виведе кількість днів у цьому році.Під час написання програми використовувати лінійний алгоритм(конструкції умовного вибору не використовувати).Наприклад, користувач ввів рік 2004, програма повідомляє, що в цьому році 366 днів у такій формі :*/
	//int year;
	//cout << "Enter year :: ";
	//cin >> year;
	//int res_task1 = 365 + (year % 4 == 0 and year % 100 != 0 or year % 400 == 0);
	//cout << "In " << year << " year = " << res_task1 << " days" << endl;

	//Користувач вводить із клавіатури грошову суму в гривнях і копійках(гривні та копійки вводяться в різні змінні).Сума може бути введена як правильно(наприклад 19 грн. 90 коп.), так і неправильно(наприклад 22 грн. 978 коп.).Написати програму, яка, використовуючи тільки лінійний алгоритм, здійснить коригування введеної грошової суми в правильну форму.
	//	Наприклад, якщо користувач ввів 11 грн. 150 коп., програма повинна вивести на екран суму 12 грн. 50 коп.
	int uah, kop;
	cout << "Enter money (22 50) :: ";
	cin >> uah >> kop;

	uah += kop / 100; // uah = uah + kop / 100
	kop %= 100;
	cout << "Result :: " << uah << " грн. " << kop << " коп." << endl;


}


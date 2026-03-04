#include <iostream>
using namespace std;

enum Color {
	RED = 1, GREEN, CYAN, YELLOW
};


int main()
{
	/*int day;
	cout << "Enter number of day :: ";
	cin >> day;

	if (day == 1) {
		cout << "Monday" << endl;
	}
	else if (day == 2) {
		cout << "Tuesday" << endl;
	}
	else if (day == 3) {
		cout << "Wednesday" << endl;
	}
	else {
		cout << "Error number !!!! " << endl;
	}*/


	//unsigned int age;
	/*size_t age;
	cout << "Enter age :: ";
	cin >> age;

	if (age >= 18 and age <= 120) {
		cout << "Welcome" << endl;
	}
	else if(age < 18)
	{
		cout << "Exit" << endl;
	}
	else {
		cout << "Error" << endl;
	}
	cout << "Test :: " << age << endl;*/

	/*string text = "Test line";
	cin >> text;
	cout << text << endl;*/


	/*string login;
	cout << "Enter login :: ";
	cin >> login;
	if (login == "admin" or login == "Admin" or login == "ADMIN") {
		string pass;
		cout << "Enter password :: ";
		cin >> pass;
		if (pass == "STEP")
			cout << "Welcome" << endl;
		else
			cout << "Error password" << endl;
	}
	else {
		cout << "Error login" << endl;
	}*/

	//int day;
	//cout << "Enter number of day :: ";
	//cin >> day;

	//switch (day)
	//{
	//case 1:
	//	cout << "Monday" << endl;
	//	break;
	//case 2:
	//	cout << "Tuesday" << endl;
	//	break;
	//case 3:
	//	cout << "Wednesday" << endl;
	//	break;
	//default:
	//	cout << "Error" << endl;
	//}

	//int month;
	//cout << "Enter number month :: ";
	//cin >> month;
	//int day = 0;

	//switch (month)
	//{
	//case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	//	day = 31; 
	//	break;
	//case 2:
	//	int year;
	//	cout << "Enter year :: ";
	//	cin >> year;
	//	// a ? b : c
	//	day = (year % 4 == 0 and year % 100 != 0 or year % 400 == 0) ? 29 : 28;
	//	break;
	//case 4: case 6: case 9: case 11:
	//	day = 30;
	//	break;

	//default:
	//	cout << "Error number " << endl;
	//	break;
	//}
	//if(day != 0)
	//	cout << "Result :: " << day << endl;



	// 12.05.2004 --> 31 + 29 + 31 + 30 + 12
	/*int day, month, year;
	cout << "enter date :: dd mm yyyy --> ";
	cin >> day >> month >> year;

	int allDay = day;
	month--;
	switch (month)
	{
	case 11:
		allDay += 30;
	case 10:
		allDay += 31;
	case 9:
		allDay += 30;
	case 8:
		allDay += 31;
	case 7:
		allDay += 31;
	case 6:
		allDay += 30;
	case 5:
		allDay += 31;
	case 4:
		allDay += 30;
	case 3:
		allDay += 31;
	case 2:
		allDay += (year % 4 == 0 and year % 100 != 0 or year % 400 == 0) ? 29 : 28;
	case 1:
		allDay += 31;
	}
	cout << "Result :: " << allDay << endl;*/
	/*int choice;
	cout << "1 - Red; \n2 - Green; \n3 - Cyan; \n4 - Yellow; \n\t Enter :: ";
	cin >> choice;

	switch (choice)
	{
	case RED:
		system("color 04");
		break;
	case GREEN:
		system("color 02");
		break;
	case CYAN:
		system("color 03");
		break;
	case YELLOW:
		system("color 06");
		break;
	}*/

	int a;
	cout << "Emter 7 whole numbers --> ";
	cin >> a;
	int max = a;
	cin >> a;
	if (max < a) max =a;
	cin >> a;
	if (max < a) max = a;
	cin >> a;
	if (max < a) max = a;
	cin >> a;
	if (max < a) max = a;
	cin >> a;
	if (max < a) max = a;
	cin >> a;
	if (max < a) max = a;
	cout << "Max :: " << max << endl;


}

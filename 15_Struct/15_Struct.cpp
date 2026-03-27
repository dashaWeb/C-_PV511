#include <iostream>
#include <string>
using namespace std;

const int SIZE = 50;
const int length = 10;
struct Date
{
	int day, month, year;
};
struct Student
{
	char name[SIZE]{};
	char surname[SIZE]{};
	char group[SIZE]{};
	int marks[length]{};
	Date birthdate{};
};

string dateToString(Date date)
{
	return (date.day < 10 ? "0" : "") + to_string(date.day) + "." + (date.month < 10 ? "0" : "") + to_string(date.month) + "." + to_string(date.year);
}

void print(Student student)
{
	cout << "\n=========== " << student.surname << " " << student.name << " ==========" << endl;
	cout << "\t Group    :: " << student.group << endl;
	cout << "\t Marks    :: ";
	for (size_t i = 0; i < length; i++)
	{
		cout << student.marks[i] << " \t ";
	}
	cout << endl;
	cout << "\t Birthdate:: " << dateToString(student.birthdate) << endl;
}
void print(Student* student)
{
	cout << "\n=========== " << student->surname << " " << student->name << " ==========" << endl;
	cout << "\t Group    :: " << student->group << endl;
	cout << "\t Marks    :: ";
	for (size_t i = 0; i < length; i++)
	{
		cout << student->marks[i] << " \t ";
	}
	cout << endl;
	cout << "\t Birthdate:: " << dateToString(student->birthdate) << endl;
}
void edit(Student& student)
{
	cout << "Enter name :: "; cin.getline(student.name, SIZE);
	cout << "Enter last name :: "; cin.getline(student.surname, SIZE);
	cout << "Enter Group :: "; cin.getline(student.group, SIZE);
	cout << "Enter marks :: ";
	for (size_t i = 0; i < length; i++)
	{
		cin >> student.marks[i];
	}
	cout << "Enter Date dd mm yyyy ";
	cin >> student.birthdate.day >> student.birthdate.month >> student.birthdate.year;
	cin.ignore();
}
void edit(Student* student)
{
	cout << "Enter name :: "; cin.getline(student->name, SIZE);
	cout << "Enter last name :: "; cin.getline(student->surname, SIZE);
	cout << "Enter Group :: "; cin.getline(student->group, SIZE);
	cout << "Enter marks :: ";
	for (size_t i = 0; i < length; i++)
	{
		cin >> student->marks[i];
	}
	cout << "Enter Date dd mm yyyy ";
	cin >> student->birthdate.day >> student->birthdate.month >> student->birthdate.year;
	cin.ignore();
}
int main()
{
	Student student_1{ "Pavlo","Melnuk","PV511",{10,11,9,8,12} };
	print(student_1);
	Student student_2{ "Olia","Bondar","PV511",{11,11,12,11,9} };
	print(student_2);

	/*strcpy_s(student_1.surname, "Bondar");
	cout << "\t LastName :: " << student_1.surname << endl;*/
	Student student_3;
	edit(student_3);
	print(student_3);

	Student* ptr_stud = new Student;
	//cout << "Enter name :: "; cin.getline(ptr_stud->name, SIZE);
	edit(ptr_stud);
	print(ptr_stud);
	
	
}


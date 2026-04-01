#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*
	ofstream --> write file // cout
	ifstream --> read file // cin
	fstream  --> write and read
*/


int main()
{

	// write
	//string line = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
	////string fname = "D:/test_file/my.txt";
	//string fname = "my.txt";
	//cout << "Size line " << line.size() << endl;
	//ofstream file;
	//file.open(fname, ios_base::app); // ('w', 'wa')
	//if (!file.is_open())
	//    cout << "File not found" << endl;
	//else {
	//    cout << "Enter line :: ";
	//    getline(cin, line);
	//    file << line << "\n";
	//}
	//file.close();

	//string fnumbers = "numbers.txt";
	//ofstream file(fnumbers);
	//if (!file.is_open())
	//    cout << "File not found" << endl;
	//else {
	//    int numb;
	//    while (cin >> numb)
	//    {
	//        file << numb << endl;
	//    }
	//}
	//file.close();

	// read 

	ifstream file("my.txt");
	if (!file.is_open())
		cout << "File not found" << endl;
	else {
		string line;
		// read word by word
		/*while (!file.eof())
		{
			file >> line;
			cout << "Result read file :: " << line << endl;

		}*/
		cout << "\n Word line by word" << endl;
		while (file >> line)
		{
			cout << "Result read file :: " << line << endl;
		}

		// read line by line
		file.clear();
		cout << "Size file :: " << file.tellg() << endl;
		file.seekg(-5, ios_base::end);
		file.seekg(0, ios_base::beg);
		cout << "Size file :: " << file.tellg() << endl;

		cout << "\n Read line by line" << endl;
		/*while (!file.eof())
		{
			getline(file, line);
			cout << "Result read line :: " << line << endl;
		}*/
		while (getline(file, line))
		{
			cout << "Result read line :: " << line << endl;
		}
		file.clear();
		file.seekg(0, ios_base::beg);
		cout << "Size file :: " << file.tellg() << endl;

		char str[100];
		char c;
		cout << "\n Word line by word" << endl;
		while (file >> str) {
			cout << "Result read file :: " << str << endl;
		}
		file.clear();
		file.seekg(0, ios_base::beg);
		cout << "\n Read line by line" << endl;
		while (file.getline(str, 100))
		{
			cout << "Result read line :: " << str << endl;
		}

		file.clear();
		file.seekg(0, ios_base::beg);
		cout << "\n Read char by char" << endl;
		while (file >> c)
		{
			cout << "Result read line :: " << c << endl;
		}
		file.clear();
		file.seekg(0, ios_base::beg);
		cout << "\n Read char by char" << endl;
		while (!file.eof())
		{
			c = file.get();
			if (file.eof())
				break;
			cout << "Result read line :: " << c << " \t " << int(c) << endl;
		}

	}
	file.close();

	file.open("numbers.txt");
	if (!file.is_open())
		cout << "File not found" << endl;
	else {
		int sum = 0;
		int numb;

		while (file >> numb)
		{
			sum += numb;
			cout << numb << "\t";
		}
		cout << endl;

		cout << "Sum :: " << sum << endl;
	}


	file.close();
}


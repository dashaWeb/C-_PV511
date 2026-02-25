
#include <iostream>
using namespace std;


int main()
{
    cout << "\a\tHell'\\o \"World!\b\"\n";
    cout << R"(
        I                   I
            LOVE    LOVE
                C++
        )" << "";
    // one line
    /*
     ctrl + shift + /
    */

    // type name
    int number = 10.9;
    double number_d = 2.5;
    float number_fl = 12.3;
    unsigned short number_s = 65536;
    long long number_l = 45;
    bool flag = false;
    char symbol = 186;

    const double PI = 3.14;
    int a = 5, b = 2;
    cout << (double)a / b << endl;
    //PI = 25;
    cout << "Int :: " << number << "\t size :: " << sizeof(number) << endl;
    cout << "Double :: " << number_d << "\t size :: " << sizeof(number_d) << endl;
    cout << "Float :: " << number_fl << "\t size :: " << sizeof(number_fl) << endl;
    cout << "Short :: " << number_s << "\t size :: " << sizeof(number_s) << endl;
    cout << "Long long :: " << number_l << "\t size :: " << sizeof(number_l) << endl;
    cout << "Bool :: " << boolalpha << flag << "\t size :: " << sizeof(flag) << endl;
    cout << "Char :: " << symbol << "\t size :: " << sizeof(symbol) << endl;
    cout << "PI :: " << PI << "\t size :: " << sizeof(PI) << endl;
    cout << (char)185 << endl;
    
    char symb = 205;

    cout << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << endl;
    cout << char(186) << "     Vremena goba     " << char(186) << endl;
    cout << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << endl;
    cout << char(186) << " Zima " << char(186) << " vesta " << char(186) << "Leto" << char(186) << "Osen" << char(186) << endl;
    cout << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << symb << endl;
    
}



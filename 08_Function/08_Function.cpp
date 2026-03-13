#include <iostream>
using namespace std;

/*
type nameFunc()
{
    body function
}
*/
void printMessage(string name);
int sum(int a, int b = 5);
double divi(int a, int b);

void printFigure(int r, int c)
{
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            cout << "*";
        }cout << endl;
    }

}

int main()
{
    printMessage("");

    int res = sum(2, 5);
    cout << "Sum :: " << sum(2,6) << endl;
    cout << "Div :: " << divi(5,2) << endl;

    printFigure(10,7);
}



void printMessage(string name)
{
    if (name.empty())
        return;

    cout << "Hello " << name << endl;
}

int sum(int a, int b)
{
    int res = a + b;
    return res;
}

double divi(int a, int b)
{
    return 0.0;
}


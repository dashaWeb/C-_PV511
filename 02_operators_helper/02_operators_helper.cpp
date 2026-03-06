#include <iostream>
using namespace std;
int main()
{
    int distance = 1000;
    double time = 3.25;
    int minutes = time; // (int)3
    int sec = (time - minutes) * 100;// 3.25 - 3 = 0.25 * 100
    int totalSecond = minutes * 60 + sec;
}

//Найти значение функции y = 3x6 − 6x2 − 7 при данном значении x

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y, a, b;
    cin >> x;
    a = 6;
    b = 2;
    y = 3 * pow(x,a) - 6 * pow(x,b) - 7;
    cout << y;

    return 0;
}

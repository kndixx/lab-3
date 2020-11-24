//Найти значение функции y = 4(x−3)6 − 7(x−3)3 + 2 при данном значении x

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y, a, b;
    cin >> x;
    a = 6;
    b = 3;
    y = 4 * pow(x - 3,a) - 7 * pow(x - 3,b) + 2;
    cout << y;

    return 0;
}

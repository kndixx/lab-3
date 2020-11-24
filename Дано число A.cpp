#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    b = a * a *a;
    c = b * b;
    c = c * c;
    c = c * b;
    cout << c;
    return 0;
}

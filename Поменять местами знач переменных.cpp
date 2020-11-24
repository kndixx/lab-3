//. Даны переменные A, B, C. Изменить их значения, переместив содержимое A в C, C — в B, B — в A, и вывести новые значения переменных A, B, C.

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c;
    d = a;
    a = b;
    b = c;
    c = d;
    cout << a << " " << b << " " << c;

    return 0;
}

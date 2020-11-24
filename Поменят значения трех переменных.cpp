

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c;
    d = b;
    b = a;
    e = c;
    c = d;
    a = e;
    cout << a << " " << b << " " << c;

    return 0;
}

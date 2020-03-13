#include <iostream>

using namespace std;

int main()
{
    int a, b, max;
    cout << "Enter A, B" << endl;
    cin >> a >> b;


    if (a > b)
        max = a;
     else
        max = b;


    cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n';


    return 0;
}

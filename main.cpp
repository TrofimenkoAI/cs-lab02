#include <iostream>

using namespace std;

int main()
{
    int a, b, max, min;
    cout << "Enter A, B" << endl;
    cin >> a >> b;


    if (a > b){
        max = a;
        min = b;
    }
    else if (a < b)
        {
            min = a;
            max = b;
        }
        else {
            max = 0;
            min = 0;
        }


    cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n';


    return 0;
}

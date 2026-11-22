// Tricky Floating point division:

#include <iostream>
using namespace std;

int main()
{
    int a = 7, b = 2;
    int div1 = a / b;          // 3
    double div2 = 1.0 * a / b; // 3.5
    int div3 = 1.0 * a / b;    // 3
    double div4 = a / b;       // 3

    cout << div1 << endl
         << div2 << endl
         << div3 << endl
         << div4 << endl;

    return 0;
}
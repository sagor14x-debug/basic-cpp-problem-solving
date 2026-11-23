//  ASCII Value and Type Conversion:

#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';
    int x = ch;   // x is 97
    char ch2 = x; // ch2 is 'a'
    cout << ch2 << endl;

    char ch3 = '5';
    int y = ch3; // y is 53
    char z = y;  // z is '5'
    cout << z;

    return 0;
}
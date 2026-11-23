// Bitwise XOR:

#include <iostream>
using namespace std;

int main()
{
    int a = 16, b = 6;

    int result = a ^ b;
    cout << result;

    return 0;
}


// Bitwise OR(|) , X-OR(^), AND(&):

#include <iostream>
using namespace std;

int main()
{
    int a = 16, b = 6;
    // int result1 = a | b;
    // int result2 = a ^ b;
    // int result3 = a & b;
    // cout << result1 << endl;
    // cout << result2 << endl;
    // cout << result3 << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    cout << (a & b) << endl;
    return 0;
}
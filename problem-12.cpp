// overflows handleing

#include <iostream>
using namespace std;

int main()
{
    int a = 1000000000;
    long long b = 1000000000;
    long long mul = (long long)(a * b);
    cout << mul << endl;

    return 0;
}




// overflows handleing

// #include <iostream>
// using namespace std;

// int main() {
//    int x = 1000;
//      x = x * x;
//     cout << x << endl;

//      x = (long long) (x * x);
//     cout << x << endl;

//     return 0;
// }
// Overflows;

#include <iostream>
using namespace std;

int main()
{
    int a = 1000000000, b = 1000000000;
    long long int result = a * b;
    cout << result << '\n';
    return 0;
}
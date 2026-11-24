//  Math problem:

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; // Input the integer

    long long cube = (long long)n * n * n; // Calculate n cubed
    int last_two_digits = cube % 100;      // Extract the last two digits

    cout << last_two_digits << '\n'; // Output the last two digits
    return 0;
}
// Digit Extraction (Using While Loop):

#include <iostream>
using namespace std;

int main()
{
    int n = 32145;
    // optionally you can take input from the user using cin >> n;

    while (n != 0)
    {                               // while n is not equal to 0, execute the body of the loop
        int last_digit = n % 10;    // get the last digit of n
        cout << last_digit << '\n'; // print the last digit
        n /= 10;                    // remove the last digit of n
    }
    return 0;
}
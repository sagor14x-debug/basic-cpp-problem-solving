#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5, b = 3, c = 4;

    cout << a + b * c << '\n';    // Multiplication has higher precedence than addition
    cout << (a + b) * c << '\n';  // Parentheses enforce addition first, then multiplication
    cout << a - b + c << '\n';    // Subtraction and addition have the same precedence (left associativity)
    cout << (a * b / c) << '\n';  // Multiplication and division have the same precedence (left associativity)
    cout << (a / b * c) << '\n';  // Multiplication and division have the same precedence (left associativity)
    cout << (a + b == c) << '\n'; // Addition has higher precedence than comparison

    return 0;
}
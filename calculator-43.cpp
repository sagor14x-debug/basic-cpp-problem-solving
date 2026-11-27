// Calculator:

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char ch;
    cout << "Enter an operator(+, -, *, /): ";
    cin >> ch;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    if (ch == '+')
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else if (ch == '-')
    {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    else if (ch == '*')
    {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    else if (ch == '/')
    {
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    }
    else
    {
        cout << "Please select right operator: 💀🖕";
    }
    return 0;
}

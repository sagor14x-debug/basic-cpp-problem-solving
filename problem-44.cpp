// **Basic Calculator – All Arithmetic Operations**

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;

    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;

    if (num2 != 0)
    {
        cout << num1 << " / " << num2 << " = " << (double)num1 / num2 << endl;
    }
    else
    {
        cout << "Division by zero is not allowed!" << endl;
    }

    return 0;
}

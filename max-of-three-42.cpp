// Max of three:

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << "All numbers are equal";
    }
    else if (a >= b && a >= c)
    {
        cout << "a is bigger";
    }
    else if (b >= a && b >= c)
    {
        cout << "b is bigger";
    }
    else
    {
        cout << "c is bigger";
    }

    return 0;
}

// Max of four:

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == b && b == c && c == d)
    {
        cout << "all number is equal";
    }
    else if (a >= b && a >= c && a >= d)
    {
        cout << "a is bigger";
    }
    else if (b >= a && b >= c && b >= d)
    {
        cout << "b is bigger";
    }
    else if (c >= a && c >= b && c >= d)
    {
        cout << "c is bigger";
    }
    else if (d >= a && d >= b && d >= c)
    {
        cout << "d is bigger";
    }

    return 0;
}

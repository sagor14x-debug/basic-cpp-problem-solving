//  Find Position of a Character in the Alphabet:

#include <iostream>
using namespace std;

int main()
{
    char ch = 'D';
    int x = ch - 'A';
    cout << x << endl; // 3

    ch = 'T';
    x = ch - 'A';
    cout << x << endl; // 19

    ch = 'd';
    x = ch - 'a';
    cout << x << endl; // 3

    ch = 't';
    x = ch - 'a';
    cout << x << endl; // 19

    return 0;
}




// #include <iostream>
// using namespace std;

// int main() {
//     int x = 3;
//     char ch = x + 'A';
//     cout << ch << endl; // D

//     x = 19;
//     ch = x + 'A';
//     cout << ch << endl; // T

//     x = 3;
//     ch = x + 'a';
//     cout << ch << endl; // d

//     x = 19;
//     ch = x + 'a';
//     cout << ch << endl; // t

//     return 0;
// }

// Even number:

// for loop:

#include <iostream>
using namespace std;
int main()
{
    int n;
    int i;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
        if (i % 2 == 0)
        {
            cout << "Even number is ==> " << i << endl;
        }
    }

    return 0;
}

// while loop:

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int i = 1;
//     cin >> n;
//     while(i <= n){
//         cout << i << endl;
//         if(i % 2 == 0){
//                 cout << "Even number is ==> " << i << endl;
//             }
//         i++;
//     }
//     return 0;
// }
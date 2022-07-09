#include <iostream>
using namespace std;

void Q(int z)                                                   // 7 is passed from function P
{
    z += z;                                                     
    cout << z << " ";                                           // 14                                      
}

void P(int *y)                                                  // 5 is passed from main function
{
    int x = *y + 2;                                             // becomes 7 here
    Q(x);
    *y = x - 1;                                                 // 7-1
    cout << x << " ";                                           // 7
}

int main()
{
    int x = 5;
    P(&x);
    cout << x;                                                  // 6 (y is returned from function P) [Line 14]
    return 0;
}

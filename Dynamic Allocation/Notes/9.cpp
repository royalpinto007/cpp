#include <iostream>
using namespace std;

// inline arguments
inline int max(int a, int b)            // copies the function once to line 23 and again to 29, it increases readability of the code
{   
    // if(a>b)
    // {
    //  return a;
    // }
    // else
    // {
    //  return b;
    // }
    return (a > b) ? a : b;             // Line(7-14) is equal to this, known as tertiary operator
}

int main()
{
    int a, b;
    cin >> a >> b;

    int c = max(a, b);                  

    int x, y;
    x = 12;
    y = 34;

    int z = max(x, y);
}

// default arguments
int sum(int a[], int size, int si = 0)   // rightmost element should also be declared first in order to have
{
    int ans = 0;
    for (int i = si; i < size; i++)
    {
        ans += a[i];
    }
    return ans;
}

int sum2(int a, int b = 0, int c = 0, int d = 0)
{
    return a + b + c + d;
}

int main()
{
    int a[20];
    // input code for a
    cout << sum(a, 20) << endl;
}


//
// Inline functions are useful when?
    
// (a) Function is large with many nested loops
// (b) Function has many static variables
// (c) Function is small and we want to avoid function call overhead. 
// (d) None of the above

// Answer- (c)
// Inline functions are used to reduce the function call overhead. 
// Inline function is a function that is expanded in line when it is called.

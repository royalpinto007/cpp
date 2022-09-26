#include <iostream>
using namespace std;

// Assume that address of 0th index of array ‘a’ is : 200.
int main()
{
    int a[6] = {1, 2, 3};
    cout << a << " " << &a;                 // 200 200   (a and &a or &a[0] are same) 
}

#include <iostream>
using namespace std;
// Assume integer takes 4 bytes and integer pointer 8 bytes.
int main()
{
    int a[5];
    int *c;
    cout << sizeof(a) << " " << sizeof(c);
}

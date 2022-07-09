#include <iostream>
using namespace std;

int main()
{
    int a = 7;
    int *c = &a;
    c = c + 1;
    cout << a << "  " << c << " " << *c << endl;            // a remains same= 7, c is the address of next storage, *c gives a garbage value of next storage
}

#include <iostream>
using namespace std;

int f(int x, int *py, int **ppz)
{
    int y, z;
    **ppz += 1;                         // 4+1=5
    z = **ppz;
    *py += 2;                           // 5+2=7 (Very Important- It's not 4+2 because ppz and py are connected)
    y = *py;          
    x += 3;                             // 4+3=7
    return x + y + z;
}

int main()
{
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);                 // 19
    return 0;
}

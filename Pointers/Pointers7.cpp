#include <iostream>
using namespace std;

int main()
{
    int a = 50;
    int *ptr = &a;
    cout << (*ptr)++ <<" ";         // 50
    cout << a << endl;              // 51
}

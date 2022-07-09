#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4};
    int *p = a++;               // Error, entire array’s address can not be shifted by four bytes
    cout << *p << endl;
}

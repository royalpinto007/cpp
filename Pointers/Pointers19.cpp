#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4};
    int *p = a++;               //error
    cout << *p << endl;
}

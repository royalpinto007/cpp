#include <iostream>
using namespace std;

int main()
{
    int a = 50;
    int *ptr = &a;
    int *q = ptr;
    (*q)++;
    cout << a <<" "<< ptr <<" "<< *ptr << endl;         // 51 0x61ff04 51
    cout << q <<" "<< *q << endl;                       // 0x61ff04 51
}

#include <iostream>
using namespace std;

int main()
{
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
    cout << *ptr2 << " ";                                           // 90.5
    cout << ptr2 - ptr1;                                            // 3    (ptr2 = ptr+3)...so ptr2-ptr1=3
    return 0;
}

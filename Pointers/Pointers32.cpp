#include <iostream>
using namespace std;

int main()
{
    int numbers[5];
    int *p;
    p = numbers;
    *p = 10;
    p = &numbers[2];                                        // this is similar to line 7 or 15
    *p = 20;
    p--;
    *p = 30;
    p = numbers + 3;                                        // this is again similar to line 7 or 15
    *p = 40;
    p = numbers;
    *(p + 4) = 50;                                          // another way of implementation
    
    for (int n = 0; n < 5; n++)
    {
        cout << numbers[n] << " ";                          // 10 30 20 40 50
    }
    return 0;
}

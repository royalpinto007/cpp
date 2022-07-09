#include <iostream>
using namespace std;

int main()
{
    char arr[20];
    int i;
    for (i = 0; i < 10; i++)
    {
        *(arr + i) = 65 + i;                    // ASCII of 65 is A
    }
    *(arr + i) = '\0';
    cout << arr;                                // ABCDEFGHIJ 
    return 0;
}

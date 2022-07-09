#include <iostream>
using namespace std;

int main()
{
    char *ptr;
    char Str[] = "abcdefg";
    ptr = Str;
    ptr += 5;
    cout << ptr;                                    // fg {Don't forget what happens with characters :)}
    return 0;
}

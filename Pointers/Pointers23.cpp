#include <iostream>
using namespace std;

int main()
{
    char s[] = "hello";
    char *p = s;                                // For characters, we can directly initialize with the value (no need to use &)
    cout << s[0] << " " << p[0];                // h h
}

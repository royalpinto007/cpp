#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';
    char *ptr = &ch;
    ch++;
    cout << *ptr << endl;                       // b (small a ascii- 97. ptr points to ch. ch is incremented and is now 98 (b))
}

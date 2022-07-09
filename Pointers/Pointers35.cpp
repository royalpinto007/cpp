#include <iostream>
using namespace std;

void swap(char *x, char *y)
{
    char *t = x;
    x = y;
    y = t;
}

int main()
{
    char *x = "geeksquiz";
    char *y = "geeksforgeeks";
    char *t;
    swap(x, y);
    cout << x << " " << y;                              // geeksquiz geeksforgeeks
    t = x;
    x = y;
    y = t;
    cout << " " << x << " " << y;                       // geeksforgeeks geeksquiz
    return 0;
}

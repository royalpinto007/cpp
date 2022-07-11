#include <iostream>
using namespace std;

int main()
{
    int p = 5;
    int const *q = &p;
    p++;
    cout << p << endl;                  // 6
    return 0;
}

// Value of p can be increased or decreased as it is not a const value.

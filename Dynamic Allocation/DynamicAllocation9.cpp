#include <iostream>
using namespace std;

int main()
{
    int const p = 5;
    cout << ++p;               // error
    return 0;
}

// Values of constant variables cannot be altered

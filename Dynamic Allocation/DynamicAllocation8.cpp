#include <iostream>
using namespace std;

int getValue(int x = 0, int y = 0, int z)
{
    return (x + y + z);
}

int main()
{
    cout << getValue(10);           // compilation error
    return 0;
}

// Default parameters must be added last in C++ functions (we can't leave the last argument declaration blank like int z in this case)

// Which of the following statement is correct?
    
//    (a) Only one parameter of a function can be a default parameter.
//    (b) Minimum one parameter of a function must be a default parameter.
//    (c) All the parameters of a function can be default parameters. 
//    (d) No parameter of a function can be default.

// Answer- (c)

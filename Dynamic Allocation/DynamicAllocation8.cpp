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


// Inline functions are useful when ______

// This problem has only one correct answer
// a) Function is large with many nested loops
// b) Function has many static variables
// c) Function is small and we want to avoid function call overhead. 
// d) None of the above

// Answer- c
// Inline functions are used to reduce the function call overhead. 
// Inline function is a function that is expanded in line when it is called.

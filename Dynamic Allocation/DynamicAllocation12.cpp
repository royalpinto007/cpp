// Which statement(s) will give an error for the following code?
#include <iostream>
using namespace std;

int main()
{
    int p = 5;
    int const *const q = &p;
    q++;
}

// This problem may have one or more correct answers

// a) p++;
// b) (*q)++;   
// c) q++;      

// Answer- (b) & (c)

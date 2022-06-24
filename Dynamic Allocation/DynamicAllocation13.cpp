// Which statement(s) will give an error for the following code
#include <iostream>
using namespace std;

int main()
{
    int p = 5;
    int const *const q = &p;
}

// This problem may have one or more correct answers
// p++;
// (*q)++;   answer
// q++;      answer

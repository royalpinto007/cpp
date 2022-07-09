#include <iostream>
using namespace std;

//Assume address of 0th index of array ‘b’ is 200. What is the output -
int main()
{
    char b[] = "xyz";
    char *c = &b[0];
    cout << c << endl;          // xyz
}

//c stores the address of start of array b (and not of it’s values). 
//So the entire array is printed when c is printed.

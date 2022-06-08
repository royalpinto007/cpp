#include <iostream>
using namespace std;
// Assume address of 0th index of array 'a' is 200. What is the output -
int main()
{
    int a[6] = {1, 2, 3};
    int *b = a;
    cout << b[2];
}
#include <iostream>
using namespace std;
// Assume that address of 0th index of array ‘a’ is : 200. What is the output -
int main()
{
    int a[3] = {1, 2, 3};
    cout << *(a + 2);
}

#include <iostream>
using namespace std;
// Assume address of 0th index of array 'a' is 200. What is the output -

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    cout << *(a) << " " << *(a + 4);
}

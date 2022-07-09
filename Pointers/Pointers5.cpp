#include <iostream>
using namespace std;

int main()
{
    int *ptr = 0;           
    int a = 10;
    *ptr = a;
    cout << *ptr << endl;    // Segmentation error because we are trying to access a memory which is not available or say accessible to us
}                            // So always initalize pointers with some existing variables to avoid this error


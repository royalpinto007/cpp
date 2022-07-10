#include <iostream>
using namespace std;

int main()
{

    int *p = new int;                       // dynamic allocation
    delete p;

    p = new int;
    delete p;                               // single element deletion (p delete nahi hua h, p jis integer ko point kr rha tha vo delete hua h)

    p = new int[100];
    delete[] p;                             // array deletion

    /*
    while (true) {
        int *p = new int;
    }

    while (true) {
        int i = 10;
    }
*/
}


// On deleting a dynamic memory, if the pointer value is not modified, then the pointer points to?
    
// This problem has only one correct answer
//  a) NULL
//  b) Other dynamically allocated memory
//  c) The same deleted memory location 
//  d) It points back to location it was initialized with

// Answer- (c)

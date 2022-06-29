// Assume an integer takes 4 bytes and a pointer takes 8 bytes.
// What is the Output?

#include <iostream>
using namespace std;

void func(int a[]) {
    cout << sizeof(a) << endl;
}

int main() {
    int a[10];
    func(a);
}

// Output- 8

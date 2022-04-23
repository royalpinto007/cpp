#include <iostream>
using namespace std;

void func(int a) {
    int b = 10;
    a = b + 10;
    cout << a << " ";
}

int main() {
    int a = 10;
    func(a);
    cout << a << " ";
}

// check error is there or not- no error

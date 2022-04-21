#include <iostream>
using namespace std;
void func(int a) {
    int b = a;
    b = b + 10;
}

int main() {
    int a = 10;
    func(a);
    cout <<b<< endl;
}

//check error is there or not- will generate error because b isnt declared in main 
#include <iostream>
using namespace std;

void func(int p)
{
    cout << p << " ";                           // 10
}

int main()
{
    int i = 10;
    int &p = i;
    func(p++);
    cout << i;                                  // 11
}

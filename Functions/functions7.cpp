#include <iostream>
using namespace std;

int square(int a)
{
    int ans = a * a;
    return ans;
}

int main()
{
    int a = 4;
    a = square(a);
    cout << a;
}

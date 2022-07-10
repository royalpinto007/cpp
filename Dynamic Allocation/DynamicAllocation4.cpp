#include <iostream>
using namespace std;

void func(int i, int &j, int p)
{
    i++;
    j++;
    p++;
}

int main()
{
    int i = 10;
    int j = 6;
    int &p = i;
    func(i, j, p);
    cout << i <<" "<< j << " " << p;                        // 10 7 10 (value of j changed because its passed by reference in the function)
}

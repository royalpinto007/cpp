#include <iostream>
using namespace std;

// Example- 0 1 1 2 3 5 8 13....
// Input- 6
// Output- 5
  
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    int smallOutput1 = fib(n - 1);
    int smallOutput2 = fib(n - 2);
    return smallOutput1 + smallOutput2;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
}

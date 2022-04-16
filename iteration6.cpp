#include <iostream>
using namespace std;

int main()
{
    int p = 100;
    if (p > 20)
    {
        if (p < 20)
        {
            cout << "coding";
        }
    }
    else                                                    // else is outside the if loop, so no output
    {
        cout << "ninjas";
    }
}
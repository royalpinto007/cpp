#include <iostream>
using namespace std;

int main()
{
    int a = 50;
    int *ptr = &a;
    cout << (*ptr)++ <<" ";                     // shouldn't be done, gives warning (but works if ignored the warningm, and gives answer as 50)
    cout << a << endl;                          // 51
}

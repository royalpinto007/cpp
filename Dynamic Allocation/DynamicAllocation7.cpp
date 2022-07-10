#include <iostream>
using namespace std;

#define SQUARE(x) x*x

int main()
{
    int x = 36 / SQUARE(6);
    cout << x;                          // 36, because in Macro it doesn't use bracket
                                        // expression will be- 36/x*x = 36/6*6 = 6*6= 36
    return 0;
}

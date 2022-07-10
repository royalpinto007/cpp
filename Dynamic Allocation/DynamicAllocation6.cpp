#include <iostream>
using namespace std;

#define MULTIPLY(a, b) a *b

int main()
{
    cout << MULTIPLY(2 + 3, 3 + 5);         // 16
    return 0;
}

// "MULTIPLY(a, b)" will be replaced by "a*b" in code.
// So, MULTIPLY(2+3, 3+5) will be replaced by 2+3*3+5. And according to operator precedence, multiply operator (*) has higher precedence than plus operator (+). 
// So, 3*3 will be evaluated first. Hence expression will become :
// 2+9+5 = 16

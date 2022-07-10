#include <iostream>
using namespace std;

void updateValue(int *p)
{
    *p = 610 % 255;                             // 100   
}

int main()
{
    char ch = 'A';
    updateValue((int *)&ch);                    // explicit typecasting
    cout << ch;                                 // d
}

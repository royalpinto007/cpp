#include <iostream>
using namespace std;

int main()
{
    int i = 65;
    char c = i;
    cout << c << endl;                          // A

    int *p = &i;
    char *pc = p;                               // wrong, can't be done (error)
    char *pc = (char *)p;                       // explicit typecasting

    cout << p << endl;                          // Address
    cout << pc << endl;                         // A

    cout << *p << endl;                         // 65                       
    cout << *pc << endl;                        // A
    
    cout << *(pc + 1) << endl;                  // Garbage or  NULL
    cout << *(pc + 2) << endl;                  // Garbage or  NULL
    cout << *(pc + 3) << endl;                  // Garbage or  NULL
}

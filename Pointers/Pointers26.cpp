#include <iostream>
using namespace std;

void square(int *p)
{
    int a = 10;
    p = &a;
    *p = (*p) * (*p);
}

int main()
{
    int a = 10;
    square(&a);
    cout << a << endl;                                  // 10
}

/*
void square(int *p){
    *p = (*p) * (*p);
}

int main(){
 int a = 10;
 square(&a);
 cout << a << endl;                                     // 100
}
*/

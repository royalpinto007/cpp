#include <iostream>
using namespace std;

void increment(int &i)                  // passed by reference, so value is changed everywhere
{
    i++;                                // make it 11
}

// bad practice
int &f(int n)
{
    int a = n;
    return a;
}

// bad practice
int *f2()
{
    int i = 10;
    return &i;
}

int main()
{
    int *p = f2();

    int i = 10;
  
//  int i;
//  i = 10;
//  this can be done, but...
  
//  int &j;
//  &j = i; 
//  cannot be done, always declaration of reference variable should be initialised
  
    int &k1 = f(i);

    increment(i);
    cout << i << endl;                  // 11

    int &j = i;                         // reference variable, j is not new memory...it is using i's memory

    i++;
    cout << j << endl;                  // 12
    j++;
    cout << i << endl;                  // 13

    int k = 100;
    j = k;
    cout << i << endl;                  // 100
    cout << j <<endl;                   // 100
}

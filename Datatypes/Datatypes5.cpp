#include<iostream>
using namespace std;

int main()
{
    int var1=5;
    int var2=6;

    if((var2=1)==var1)                      // here var2 becomes 1 from 6 & condition is false, so it goes to else condition
    {
        cout<<var2;                         
    }
    else
    {
        cout<<(var2+1);                     // var2 is 1, therefore 1+1=2 will be the answer
    }
}

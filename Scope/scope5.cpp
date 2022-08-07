#include<iostream>
using namespace std;

int main()
{
    int a=10;
    while(a>5)
    {
        int a=1;
        cout<<a<<" ";
        a--;                        // infinite 1's will be printed
    }
}

/*
      A
     BB
    CCC
   DDDD
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int spaces=1;
        while(spaces<=n-i)
        {
            cout<<" ";
            spaces++;
        }

        int j=1;
        while(j<=i)
        {
            char ch='A'+i-1;
            cout<<ch;
            j++;
        }      
        i++;
        cout<<endl;
    }
}

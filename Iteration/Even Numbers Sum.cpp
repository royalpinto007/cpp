#include<iostream>
using namespace std;

int main()
{
    int sum=0, n, i=2;
    cin>>n;

    while(i <= n)
    {
        if(i % 2 == 0)
        {
            sum=sum+i;

        }
        i++;
    }
    cout<<sum;
}

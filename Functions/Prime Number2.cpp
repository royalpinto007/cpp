#include<iostream>
using namespace std;

bool isprime(int n)
{
    int d=2;
    while(d<n)
    {
        if(n%d==0)
        {
            return false;
        }
        d++;
    }
    return true;
}

int main()
{
    bool ans=isprime(30);
    cout<<ans<<endl;
    ans=isprime(31);
    cout<<ans<<endl;
}

#include<iostream>
using namespace std;

int main(){
    int n,i,j,isprime;
    cin>>n;

    for(i=2; i<=n; i++){
        isprime=0;

        for(j=2; j<=i/2; j++){          // i/2 to check till half (eg- to check if 17 is a prime number, we will check till 8)
            if(i%j==0){
                isprime=1;
                break;
            }
        }
        if(isprime==0 && n!=0){      // mistake done while programming- inlcuded 0 -
            cout<<i<<endl;
        }
    }
    return 0;
}
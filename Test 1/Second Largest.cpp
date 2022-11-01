// Take input a stream of n integer elements, find the second largest element present.
// The given elements can contain duplicate elements as well. If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).

#include<iostream>
using namespace std;
#include <climits>

int main(){
    int n;
    cin>>n;
    int max=INT_MIN, secondMax=INT_MIN;
    int num;
    int count=1;
    
    while(count<=n){
        cin>>num;
        if (num>max){
            secondMax=max;
            max=num;
        }
        else if(num>secondMax&&num!=max){
            secondMax=num;
        }
        count++;  
    }
    cout<<secondMax<<endl;  
}

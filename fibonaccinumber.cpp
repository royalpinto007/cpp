/* To Find nth Fibonacci number

Fibonacci Series- sum of previous two numbers
    1 1 2 3 5 8 13

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int a=0, b=1, c;        // a is taken as 0 and b to be 1 (so that first number becomes 1)

    for(int i=0; i<=n; i++){
        c=a+b;
        a=b; 
        b=c; 

    }
    cout<<a;

}
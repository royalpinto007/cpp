#include<iostream>
using namespace std;

int main(){
    int i=1;
    while(i<=5){
        if (i==4){
            continue;                            //till 3 it will print and then will become an infinite loop
            
        }
    cout<<i<<" ";
    i++;
    }
}

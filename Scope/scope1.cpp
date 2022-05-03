#include<iostream>
using namespace std;

int main(){
    int a=10;
    if (a>5){
        int b=10;
    }
    cout<<b;                                      //doesnt work(code error) since b is inside the if condition and scope is limited to the brackets
}

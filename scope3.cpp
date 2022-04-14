#include<iostream>
using namespace std;

int main(){
    int a=10;
    if(a>5){
        int a=100;
    }
    else{
        int a=110;
    }
    cout<<a<<endl;                  //10 will be the answer, because a=100 and 110 is outside the scope
}
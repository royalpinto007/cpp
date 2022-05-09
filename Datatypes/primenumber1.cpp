#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool dividend=false;
    for(int d=2; d<n; d++){
        if(n%d==0){
            dividend=true;
        }
    }
    if(dividend){
        cout<<"Not Prime";
    }
    else{
        cout<<"Prime";
    }
}

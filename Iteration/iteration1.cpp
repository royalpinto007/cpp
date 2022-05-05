#include<iostream>
using namespace std;

int main(){
    int i=1;
    while(i<10){
        if(i==7){
            i++;
            continue;
        }
        cout<<i<<" ";
        i++;
    }
    cout<<endl;
    for(int j=1; j<10; j++){
        if(j==7){
            break;
        }
        cout<<j<<" ";
    }
}

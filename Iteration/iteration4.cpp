#include<iostream>
using namespace std;

int main(){
    int i=1;
    while(i<3){
        int j=1;
        while(j<5){
            if(j==3){
                break;
            }
            cout<<j<<" ";
            j++;
        }
        i++;
    }
}

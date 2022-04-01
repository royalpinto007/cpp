#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int number;
    int sumo=0;
    int sume=0;

    while(n>0){
        number=n%10;                    //to make the number smaller, in order to save time

        if (number%2==0){
            sume=sume+number;
        }
        else{
            sumo=sumo+number;
        }
        n=n/10;                        //for next digit

    }
    cout<<sume<<" "<<sumo;
}
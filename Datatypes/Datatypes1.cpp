#include<iostream>
using namespace std;

int main(){
    //Note- int/int=int
    int f;
    float g;                                //dont forget to enter it again :)
    cin>>f>>g;

    int c=(5/9)*(f-32);                     // 5/9 is of the form int/int, 5/9=0
    int d=(5.0/9)*(f-32);                   // float/int=float but it is stored in int
    
    float e=(5.0/9)*(g-32);                 // the most accurate one

    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e;
}

/* Write a program that takes a character as input and prints either 1,0,-1 according to the following need:

    1) 1 if the character is an uppercase letter
    2) 0 if the character is an lowercase character
    3) -1 if the character is not an alphabet
*/


#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;

    if(ch>='A' && ch<='Z'){
        cout<<"1";
    }

    else if(ch>='a' && ch<='z'){
        cout<<"0";
    }

    else{
        cout<<"-1";
    }
}
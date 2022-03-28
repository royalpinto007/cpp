#include<iostream>
using namespace std;

int main()
{
    char a=34354;         //shows warning because range of char is -127 to 128 and makes some equivalent of 34354 to give 2 as the answer
    cout<<a;
}
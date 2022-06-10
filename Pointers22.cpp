#include <iostream>
using namespace std;
//Assume address of 0th index of array ‘b’ is 200. What is the output -
int main()
{
    char b[] = "xyz";
char *c = &b[0];
c++;
cout << c << endl;          //yz will be the output
}
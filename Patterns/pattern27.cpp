/*

E
DE
CDE
BCDE
ABCDE

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        char start='A'+n-i;
        while(j<=i){
            char ch=start+j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}

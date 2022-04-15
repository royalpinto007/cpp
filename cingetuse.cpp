/* Write a program to count and print the total number of characters (lowercase english alphabets only), 
digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.

Sample Input- abc def4 5$
        Output-6 2 2
*/

#include<iostream>
using namespace std;

int main(){

    char c;
    c = cin.get();
    int charac = 0;
    int spaces = 0;
    int digits = 0;
    while(c != '$'){
        if(97<=c && c<=123){
        charac++;
        }
        else if(c=='\t' || c=='\n' || c==' '){
            spaces++;
        }
        else{
        digits++;
        }
        c = cin.get();  
    }
    cout<<charac<<" "<<digits<<" "<<spaces; 
}
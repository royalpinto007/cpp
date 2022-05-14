#include<iostream>
using namespace std;

int main(){
    
    char c;                     // take input as abc def$
    cin>>c;

    int count=0;
    while(c!='$'){
        count++;
        cin>>c;
        

    }
    cout<<count<<endl;
    }


    /* if we use cin.get(), it counts the spaces, tabs and new line as well....cin doesnt do the same

    char c;
    c=cin.get()
    int count=0;
    while(c!='$'){
        count ++;
        c=cin.get();
        }
        cout<<count<<endl;
        }

        */

// Given an array of length N, you need to find and print the sum of all elements of the array.
  
  
  #include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;
    int input[99999];

    for (int i=0; i<n;i++){
        cin>>input[i];
    }
   int sum=0;
    for(int i=0; i<n; i++){

        sum=sum+input[i];

    }
    cout<<endl;
        cout<<sum;
}


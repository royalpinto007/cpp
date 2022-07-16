// What will be the output of the following code ?
#include <iostream>
using namespace std;

int func(int num){
    return func(num- 1);
}

int main() {
    int num = 5;
    int ans = func(num - 1);
    cout << ans;
}

// This problem has only one correct answer
// (a) Compilation Error
// (b) Runtime Error 
// (c) None of these
// (d) 5
  
// Answer- (b)

// Since the base case is missing in the code, therefore there will be infinite recursion calls and hence runtime error will occur.

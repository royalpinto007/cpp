// Given a string S, you need to remove all the duplicates. 
// That means, the output string should contain each character only once. 
// The respective order of characters should remain same, as in the input string.
  
// Sample Input 1 :
// ababacd
// Sample Output 1 :
// abcd

// Sample Input 2 :
// abcde
// Sample Output 2 :
// abcde

#include <unordered_map>
string uniqueChar(string str){

    string s;
    unordered_map<char, int> m;
    for (int i = 0; i < str.length(); i++)
    {
        if (m.count(str[i]) == 0)
        {
            m[str[i]]++;
            s += str[i];
        }
    }
    return s;
}

/*
#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() {
    string str;
    cin >> str;
    cout << uniqueChar(str);
}
*/

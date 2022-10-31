#include <stack> 

bool isBalanced(string expression) { 
    stack<char> stk; 
    for (int i = 0; i < expression.length(); i++) { 
        if (expression[i] == '(') 
        { 
            stk.push(expression[i]); 
        } 
        else if (expression[i] == ')') { 
            if (stk.empty()) 
            { 
                return false; 
            } 
            char topChar = stk.top(); 
            stk.pop(); 
            if (expression[i] == ')' && topChar == '(') 
            { 
                continue; 
            } 
            else 
            { 
                return false; 
            } 
        } 
    } 
    return stk.empty(); 
}

/*
#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() 
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}
*/

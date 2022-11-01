#include <stack> 
int *stockSpan(int *price, int n) { 
    stack<int> stk; 
    int *output = new int[n]; 
    stk.push(0); output[0] = 1; 
    
    for (int i = 1; i < n; ++i) 
    { 
        while (!stk.empty() && price[stk.top()] < price[i])
        { stk.pop(); 
        } 
        
        if (stk.empty()) 
        {
            output[i] = i + 1; 
        } 
        else 
        { 
            output[i] = i - stk.top(); 
        } 
        stk.push(i); 
    } 
    return output; 
}

/*
#include <iostream>
using namespace std;

#include "solution.h"

int main() {
    int size;
    cin >> size;

    int *input = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int *output = stockSpan(input, size);
    for (int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }

    cout << "\n";

    delete[] input;
    delete[] output;
}
*/

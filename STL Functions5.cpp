#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Stack
void ExplainStack()
{
    stack<int> st;

    st.push(1);    //{1}
    st.push(2);    //{2,1}
    st.push(3);    //{3,2,1}
    st.push(3);    //{3,3,2,1}
    st.emplace(5); //{5,3,3,2,1}

    cout << st.top(); // prints 5

    st.pop(); //{3,3,2,1}

    cout << st.top();  // prints 3
    cout << st.size(); // prints 4
    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);

    // begin, end, rbegin, rend, swap, etc are similar to vectors
}

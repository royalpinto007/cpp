#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Queues
void ExplainQueue()
{
    queue<int> q;
    q.push(1);    //{1}
    q.push(2);    //{1,2}
    q.emplace(4); //{1,2,4}

    q.back() += 5;    // q becomes {1,2,9}
    cout << q.back(); // prints 9

    // q is {1,2,9}
    cout << q.front(); // prints 1

    q.pop();

    cout << q.front(); // prints 2
}

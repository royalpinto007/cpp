#include <queue>

void reverseQueue(queue<int> &q) {
	
    if(q.size()<=0)  return;
    
    int x=q.front();
    q.pop();
    reverseQueue(q);
    
    q.push(x);
}

/*
#include <iostream>
using namespace std;

#include "solution.h"

int main() {
    int t;
    cin >> t;

    while (t--) {
        queue<int> q;
        int size;
        cin >> size;

        for (int i = 0, val; i < size; i++) {
            cin >> val;
            q.push(val);
        }

        reverseQueue(q);
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }

        cout << "\n";
    }
}
*/

class Queue {
    Node *head; Node *tail; 
    int size; public: Queue() 
    { 
        head = NULL; 
        tail = NULL; 
        size = 0; 
    } 
    
    int getSize() 
    { 
        return size; 
    } 
    
    bool isEmpty() 
    {
        return size == 0; 
    } 
    
    void enqueue(int data) 
    { 
        size++; 
        Node *newNode = new Node(data);
        if (head == NULL) 
        { head = newNode; 
         tail = newNode;
         return; 
        } tail->next = newNode; 
        tail = newNode; 
    } 
    
    int dequeue()
    { 
        if (isEmpty()) 
        { return -1; } 
        
        int ans = head->data; 
        Node *tmp = head; 
        head = head->next; 
        delete tmp; size--; 
        return ans; 
    } 
    int front() 
    { 
        if (isEmpty())
        { return -1; } 
        return head->data; 
    } 
};

// #include <iostream>
// using namespace std;

// class Node {
//    public:
//     int data;
//     Node *next;

//     Node(int data) {
//         this->data = data;
//         next = NULL;
//     }
// };

// #include "solution.h"

// int main() {
//     Queue q;

//     int t;
//     cin >> t;

//     while (t--) {
//         int choice, input;
//         cin >> choice;
//         switch (choice) {
//             case 1:
//                 cin >> input;
//                 q.enqueue(input);
//                 break;
//             case 2:
//                 cout << q.dequeue() << "\n";
//                 break;
//             case 3:
//                 cout << q.front() << "\n";
//                 break;
//             case 4:
//                 cout << q.getSize() << "\n";
//                 break;
//             default:
//                 cout << ((q.isEmpty()) ? "true\n" : "false\n");
//                 break;
//         }
//     }
// }

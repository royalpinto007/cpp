// What is the Output?
  
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this -> data = data;
//         this -> next = NULL;
//     }
// };


// void print(Node *head)
// {
//     Node *temp = head;

//     while(temp != NULL)
//     {
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }

// int main()
// {
//     Node *node1 = new Node(10);
//     Node *node2 = new Node(20);
//     Node *node3 = new Node(20);
//     Node *node4 = new Node(20);
//     node1 -> next = node2;
//     node2 -> next = node3;
//     node3 -> next = node4;
//     print(node2);
// }

// This problem has only one correct answer
// (a) 10 20 30 40
// (b) 20 30 40
// (c) Error
// (d) None 

// Answer- (d) [20 20 20]

// What is the output?
  
// class Node
// {
//     public:
//         int data;
//         Node *next;

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

// void increment(Node *head)
// {
//     Node *temp = head;
//     while(temp != NULL)
//     {
//         temp -> data++;
//         temp = temp -> next;
//     }
// }

// int main()
// {
//     Node *node1 = new Node(10);
//     Node *node2 = new Node(20);
//     node1 -> next = node2;
//     increment(node1);
//     print(node1);
// }

// This problem has only one correct answer
// (a) 10 20
// (b) 11 21 
// (c) Error
// (d) None

// Answer- (b)

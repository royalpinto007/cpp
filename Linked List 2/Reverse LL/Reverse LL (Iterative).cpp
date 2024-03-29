Node* reverseLinkedList(Node* head) { 
    Node *currentNode = head;
    Node *previousNode = NULL; 
    
    while (currentNode != NULL) { 
        Node *nextNode = currentNode->next; 
        currentNode->next = previousNode; 
        previousNode = currentNode; 
        currentNode = nextNode; 
    }
    
    head = previousNode; 
    return head; 
}

// Node *reverseLinkedList(Node *head)
// {
//     Node *p=head,*q=NULL,*r=NULL;
//     while(p)
//     {
//         r=q;
//         q=p;
//         p=p->next;
//         q->next=r;
//     }
    
//     return q;
// }

/*
#include <iostream>
using namespace std;


class Node 
{
   public:
    int data;
    Node *next;
    Node(int data) 
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *takeinput() 
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1) 
    {
        Node *newnode = new Node(data);
        if (head == NULL) 
        {
            head = newnode;
            tail = newnode;
        } 
        else 
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) 
{
    Node *temp = head;

    while (temp != NULL) 
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        Node *head = takeinput();
        head = reverseLinkedList(head);
        print(head);
    }

    return 0;
}
*/

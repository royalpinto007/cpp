Node* NextLargeNumber(Node *head) {
    
    if(head->next==NULL)
    {
        if(head->data==9)
        {    head->data=0;
        	Node *x=new Node (1);
        
        	x->next=head;
       	 head=x;
        }
        else
            head->data++;
        
        return head;
    }
    Node *pn=NextLargeNumber(head->next);
    
    if(head->next->data==0 && pn->data==1)
    {  
         if(head->data==9)
        {    head->data=0;
        	Node *x=new Node (1);
        
        	x->next=head;
       	    head=x;
        }
        else
            head->data++;
        
        delete pn;
        return head;
    }
        
    else
    { 
        return head;
    }
}

/*
#include <iostream>
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

using namespace std;
#include "Solution.h"

Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL)                  {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
    Node *head = takeinput();
    
    head = NextLargeNumber(head);
    print(head);
    return 0;
}
*/

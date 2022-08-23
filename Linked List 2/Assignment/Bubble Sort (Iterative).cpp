int len(Node *head)
{
    Node *temp=head;
    int count=1;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}

Node *bubbleSort(Node *head)
{
    if(head==NULL || head->next==NULL)
        return head;
    
    //node *curr=head;
    //node *prev=NULL;
    //node *n=head->next;
    for(int i=0;i<len(head);i++){
        Node *curr=head;
        Node *prev=NULL;
          // node *n=head->next;
        
        while(curr->next!=NULL) // traverse though LL
        {
            if(curr->data > curr->next->data)  // if nodes are to be swapped
            {
		if(prev)   //check if previous of the current node exist , u cant point on a garbage value
                {
                    // swapping using those 4 steps
                    Node* t=curr->next->next;
                    curr->next->next= curr;
                    prev->next=curr->next;
                    curr->next=t;
                    prev=prev->next;
                }
                else  //is it doent exist it would be head node 
                {
                    head= curr->next;
                    curr->next=head->next;
                    head->next=curr;
                    prev=head;
                }
                
            }
          else    // else you simply move to next node
            {
                prev=curr;
                curr=curr->next;
            }
        }
    }
  
  return head;
}

/*
#include <iostream>
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

using namespace std;
#include "solution.h"
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
	cout << endl;
}
int main()
{
	Node *head = takeinput();
	head = bubbleSort(head);
	print(head);
}

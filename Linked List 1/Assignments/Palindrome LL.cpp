Node* reverseLL(Node *temp)
{
    Node *p1=NULL;
    Node *p2=temp;
    Node *p3=temp->next;
    
    while(p3!=NULL)
    {
        p2->next=p1;
        p1=p2;
        p2=p3;
        p3=p3->next;
        
    }
    
    p2->next=p1;
    
    temp=p2;
    return temp;
}


bool isPalindrome(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return true;
    }
    
    Node *slow=head;
    Node *fast=head->next;
    
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    
    Node *mid=slow;
    
    Node *midNext=slow->next;
    
    mid->next=NULL;	//slow->next=NULL
    
    Node *head1=head;
    
    Node *head2=reverseLL(midNext);
    
    while(head2!=NULL)
    {
        if(head1->data!=head2->data)
        {
            return false;
        }
        
        head1=head1->next;
        head2=head2->next;
    }
    
    return true;
    
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

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		bool ans = isPalindrome(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;
	}

	return 0;
}
*/

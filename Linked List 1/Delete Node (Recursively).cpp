Node* deleteNodeRec(Node *head, int i) {
  
    if(head==NULL ||i<0)
        return head;
    if(i==0)
    {
        Node *p=head;
        head=p->next;
        delete p;
        return head;
    }
    Node *x=deleteNodeRec(head->next,i-1);
    head->next=x;
    x=head;
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
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
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
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		int pos;
		cin >> pos;
		head = deleteNodeRec(head, pos);
		print(head);
	}

	return 0;
}
*/

Node *swapNodes(Node *head, int i, int j)
{
    Node *p=head,*q=head;
    
    // to traverse upto i
    for(int index=0;index<i;index++)
    {
        p=p->next;
    }
    // to traverse upto j
    for(int index=0;index<j;index++)
    {
        q=q->next;
    }
    // swap nodes
    int x=p->data;
    p->data=q->data;
    q->data=x;
    
    return head;
}

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
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int i, j;
		Node *head = takeinput();
		cin >> i;
		cin >> j;
		head = swapNodes(head, i, j);
		print(head);
	}
	return 0;
}
*/

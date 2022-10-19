Node *appendLastNToFirst(Node *head, int n)
{
	// Two pointers, one for traversal and 
	// other for finding the new head of LL
    if(head==NULL||head->next==NULL)
        return head;
	Node *temp = head, *t = head;           
	//index maintained for finding new head
	int i = -n;
	while(temp->next!=NULL){
		//When temp went forward n nodes from t
		if(i>=0){                           
			t = t->next;
		}
		temp = temp ->next;
		i++;
	}
	//Connecting the tail to head
	temp->next = head;                      
	//Assigning the new node
	head = t->next;                         
	//Deleting the previous connection
	t->next = NULL;                         
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
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}
*/

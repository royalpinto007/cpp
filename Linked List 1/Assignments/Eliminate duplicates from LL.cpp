Node *removeDuplicates(Node* head){
	//temp pointing to head
	Node *temp = head;  
      if(head==NULL)	return head;
	while(temp->next != NULL && temp != NULL)
    {
		//Duplicate Found
		if(temp->data == temp->next->data)
        {      
			//DUplicate Removed
			temp -> next = temp ->next ->next;    
		}
		else
        {
			//No Duplicate Present
			temp = temp->next;               
		}
	}
	//Return Head
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
		head = removeDuplicates(head);
		print(head);
	}
	return 0;
}
*/

// void printIthNode(Node *head, int i) { 
//     int position = 0; 
//     Node *temp = head; 
    
//     while (temp != NULL && position < i) { 
//         position++; 
//         temp = temp->next; 
//     } 
//     if(temp != NULL) { 
//         cout << temp->data; 
//     } 
// }


void printIthNode(Node *head, int i) {
  
    Node* temp = head;
    int count =0;
    while(temp)
    {
        if(i==count)
        {
            cout<< temp->data<<endl;
            return;
        }
        
        count++;
        temp=temp->next;
    }
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

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int pos;
		cin >> pos;
		printIthNode(head, pos);
		cout << endl;
	}
	return 0;
}
*/

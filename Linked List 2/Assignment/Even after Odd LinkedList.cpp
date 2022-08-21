Node *evenAfterOdd(Node *head)
{   
    Node *even= new Node(0);
    Node *etail=even;
    
    Node *odd=new Node(0);
    Node *otail=odd;
    
   while(head)
    {
        if(head->data%2==0)
        {
            
            etail->next=head;
            etail=head;
            head=head->next;
            etail->next=NULL;
        }
        else
        {
            otail->next=head;
            otail=head;
            head=head->next;
            otail->next=NULL;
        }
    }
   otail->next=even->next;
   return odd->next;
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
		Node *head = takeinput();
		head = evenAfterOdd(head);
		print(head);
	}
	return 0;
}
*/

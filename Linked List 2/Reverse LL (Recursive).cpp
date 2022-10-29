// 2nd solution is easy to understand, LOL

Node *reverseLinkedListRec(Node *head) { 
    // 1 2 3 4 5 NULL
    if (head == NULL || head->next == NULL) { 
        return head; 
    } 
    // 5 4 3 2 NULL
    // smallhead=5 ka address
    Node *smallhead = reverseLinkedListRec(head->next); 
    
    head->next->next = head; 	// https://stackoverflow.com/questions/37848186/how-to-understand-head-next-next-head-for-reverse-single-list-by-recursion
    head->next = NULL; 		// fixing 1's address to be NULL (5 4 3 2 1 NULL)
    return smallhead; 		// return 5's address to print the whole LL
}

// Node* reverseLL(Node *head) {
// 	if(head == NULL || head -> next == NULL) {
// 		return head;
// 	}

// 	Node *smallAns = reverseLL(head -> next);

// 	Node *temp = smallAns;
// 	while(temp -> next != NULL) {
// 		temp = temp -> next;
// 	}

// 	temp -> next = head;
// 	head -> next = NULL;
// 	return smallAns;
// }

// Node *reverseLinkedListRec(Node *head)
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
	cout << endl;
}

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		Node *head = takeinput();
		head = reverseLinkedListRec(head);
		print(head);
	}

	return 0;
}
*/

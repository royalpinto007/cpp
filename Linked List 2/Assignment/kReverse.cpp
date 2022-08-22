Node *kReverse(Node *head, int k) 
{ 
    if (k == 0 || k == 1)
    { 
        return head; 
    } 
    Node* current = head; 
    Node* fwd = NULL; 
    Node* prev = NULL; 
    int count = 0; 
    /* Reverse first k nodes of linked list */ 
    while (count < k && current != NULL) 
    { 
	 fwd = current->next; 
    	 current->next = prev; 
    	 prev = current; 
     	current = fwd; count++; 
    } 
    if (fwd != NULL) 
    { 
        head->next = kReverse(fwd, k); 
    } 
    return prev; 
}

/*
Node* kReverse(Node*head,int k)
{
if(head == NULL || head->next == NULL){
        return head;
    }
    Node* current = head;
    Node* temp = head;
    Node* pre = NULL;
    int i = 0;
    while(current!=NULL && i<k){
        temp = temp -> next;
        current->next = pre;
        pre = current;
        current = temp;
        i++;
    }
    if(temp != NULL){
        head->next = kReverse(temp,k);
    }
    return pre;
}
*/

/*
Node *kReverse(Node *head, int k) { 
    if (k == 0 || k == 1) { 
        return head; 
    } 
    Node* current = head; 
    Node* fwd = NULL; 
    Node* prev = NULL; 
    int count = 0; 
     Reverse first k nodes of linked list  
    while (count < k && current != NULL) 
    { fwd = current->next; 
     current->next = prev; 
     prev = current; 
     current = fwd; count++; 
    } 
    if (fwd != NULL) { 
        head->next = kReverse(fwd, k); 
    } 
    return prev; 
}

*/

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
		int k;
		cin >> k;
		head = kReverse(head, k);
		print(head);
	}
	
	return 0;
}
*/

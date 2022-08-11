/****************************************************************
 
    Following is the class structure of the Node class:

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

*****************************************************************/
/* 
Time Complexity : O(n) 
Space Complexity : O(1) 
where n is the size of singly linked list 
*/ 

Node *midPoint(Node *head) 
{ 
    if (head == NULL || head->next == NULL) // head==NULL is a condition for odd & head->next == NULL is a condition for even
    { 
        return head; 
    } 
    
    Node *slow = head, 
    *fast = head->next; 
    while (fast != NULL && fast->next != NULL) 
    { 
        slow = slow->next; 
        fast = fast->next->next; 
    }
    return slow; 
}

// #include <cmath>
// int length(Node*head)
// {
//      int count=1;
//     while(head)
//     {
//         count++;
//         head=head->next;
//     }
//     return count;
// }
// Node *midPoint(Node *head)
// {
//      if(head==NULL)	 return head;
//     // Write your code here
//    int x=ceil(length(head)/2);
    
//     for(int i=1;i<x;i++)
//     {
//         head=head->next;
//     }
  
//     return head;
// }

/*
#include <iostream>
using namespace std;

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
		Node *mid = midPoint(head);
		if (mid != NULL)
		{
			cout << mid->data;
		}
		cout << endl;
	}
	return 0;
}
*/

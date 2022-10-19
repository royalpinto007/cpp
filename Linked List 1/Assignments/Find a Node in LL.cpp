/*
Sample Input 1 :
2
3 4 5 2 6 1 9 -1
5
10 20 30 40 50 60 70 -1
6
  
Sample Output 1 :
2
-1
*/

int findNode(Node *head, int n)
{
    Node *temp= head;
    int count=0;
    if(temp == NULL)
    {
        return -1;
    }      
    while(temp != NULL && temp->data  != n )
    {
        count++;
        temp= temp->next;
    }
    if(temp != NULL &&temp->data ==n)
    {
        return count;
    }
    return -1;
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
		int val;
		cin >> val;
		cout << findNode(head, val) << endl;
	}
}
*/

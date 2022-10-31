#include <iostream>
using namespace std;

template <typename T>
class Node {
	public : 
		T data;
		Node<T> *next;

		Node(T data) {
			this -> data = data;
			next = NULL;
		}

		~Node() {
			delete next;
		}
};

template <typename T>
class Stack {
	Node *head ;
    int size; // define the data members
    
   public:
    Stack() {
        // inplement the constructor 
        head == NULL;
        size=0;
        
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return size; 
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        return size==0;
    }

    void push(int element) 
    {
        Node *newNode = new Node(element);
        
        // if(head!=NULL){  
            newNode->next = head;
        // }
        // else{
            head = newNode;
            size++;
        // }
    }

    int pop(){
        if(size==0)
        {
            return -1;
        }
        
        int ans = head->data;
        Node *temp = head;
        head= head->next;
        delete temp;
        size --;
        return ans;
    }      

    int top()
    {
       if(size == 0)
       {
            return -1;
        }
        return head -> data;
    }
};

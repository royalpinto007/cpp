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

Node *kReverse(Node *head, int k) { 
    if (k == 0 || k == 1) { 
        return head; 
    } 
    Node* current = head; 
    Node* fwd = NULL; 
    Node* prev = NULL; 
    int count = 0; 
    /* Reverse first k nodes of linked list */ 
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

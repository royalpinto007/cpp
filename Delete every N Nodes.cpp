Node* skipMdeleteN(Node *head, int M, int N) 

    if(M==0) return NULL; // edge case  not a base case
    
    //base case
    if(head==NULL ||head->next==NULL) 
    {
        return head;
    }
    if(N==0)
    {
        return head;
    }
    
    Node*temp=head;
    int count1=0;
    int count2=0;

    while(temp->next !=NULL && count1<M-1) //travel M nodes
    {   
        count1++;
        temp=temp->next;   
    }
    
    Node*t1=temp;
   	// t1=temp;
  	temp=temp->next;

    if(temp==NULL)
        return head;
    
    while(temp->next!=NULL && count2<N-1)
    {   count2++;
        temp=temp->next;
      
    }
    
    Node*t2;
    t2=temp->next;
      
    Node*m=skipMdeleteN(t2,M,N);   
    t1->next=m;
    return head;
}

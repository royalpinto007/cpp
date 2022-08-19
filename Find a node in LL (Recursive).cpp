int findNodeRec(Node *head, int n) 
{
    if(head==NULL)
        return -1;
    if(head->data==n)
        return 0;
    
    int x=findNodeRec(head->next,n);
    if(x==-1)
        return x;

    else
        return x+1;
}

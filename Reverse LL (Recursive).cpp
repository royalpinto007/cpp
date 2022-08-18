Node *reverseLinkedListRec(Node *head)
{
    Node *p=head,*q=NULL,*r=NULL;
    while(p)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    
    return q;
}

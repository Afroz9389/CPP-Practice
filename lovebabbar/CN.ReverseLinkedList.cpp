// iterative approach
Node* reverseLinkedList(Node *head)
{
    if(head==NULL||head->next==NULL)
    {
        //empty list or single node list
        return head;
    }
    Node *prev=NULL;
    Node *curr=head;
    Node *forward=NULL;
    while(curr!=0)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

//recursive approach
/*Node *reverse1(Node *head)
{
    //base case
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    //recursive call
    Node *chotaHead=reverse1(head->next);
    //solve
    head->next->next=head;
    head->next=NULL;
    return chotaHead;
}
Node *reverseLinkedList(Node *head)
{
    return reverse1(head);
}*/
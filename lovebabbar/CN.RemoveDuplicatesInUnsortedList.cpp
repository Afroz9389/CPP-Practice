Node *removeDuplicates(Node *head)
{
    
    Node *curr=head;
    Node *temp, *dup;

    /* Pick elements one by one */
    while (curr != NULL && curr->next != NULL) {
        temp = curr;

        /* Compare the picked element with rest
           of the elements */
        while (temp!=NULL&&temp->next != NULL) {
            /* If duplicate then delete it */
            if (curr->data == temp->next->data) {
                /* sequence of steps is important here */
                dup = temp->next;
                temp->next = temp->next->next;
                delete (dup);
            }
            else /* This is tricky */
                temp = temp->next;
        }
        curr = curr->next;
    }
    return head;
}
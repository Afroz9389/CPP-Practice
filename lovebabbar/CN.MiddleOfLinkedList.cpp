/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

/*approach-1
int getLength(Node *head)
{
    int len=0;
    while(head!=0)
    {
        len++;
        head=head->next;
    }
    return len;
}
Node *findMiddle(Node *head) {
    int len=getLength(head);
    int ansIndex=(len/2)+1;
    Node *temp=head;
    int cnt=1;
    while(cnt<ansIndex)
    {
        temp=temp->next;
        cnt++;
    }
    return temp;
}
*/

//optimized approach
Node *getMiddle(Node *head)
{
    //empty or 1 node
    if(head==NULL||head->next==NULL)
    {
      return head;
    }
    //2 node
    if(head->next->next==NULL)
    {
        return head->next;
    }
    //algo
    Node *slow=head;
    Node *fast=head->next;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}

Node *findMiddle(Node *head) {
  return getMiddle(head);
}




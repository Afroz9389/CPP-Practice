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
void insertAtTail(Node*&tail,Node*curr)
{
    tail->next=curr;
    tail=curr;
}
Node* sortList(Node *head){
    //APPROACH-1
    /*int zeroCount=0;
    int oneCount=0;
    int twoCount=0;

    Node*temp=head;
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
           zeroCount++; 
        }
        else if(temp->data==1)
        {
           oneCount++; 
        }
        else if(temp->data==2)
        {
           twoCount++; 
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        if(zeroCount!=0)
        {
            temp->data=0;
            zeroCount--;
        }
        else if(oneCount!=0)
        {
            temp->data=1;
            oneCount--;
        }
        else if(twoCount!=0)
        {
            temp->data=2;
            twoCount--;
        }
        temp=temp->next;
    }
    return head;*/

    //APPROACH-2
    Node*zeroHead=new Node(-1);
    Node*zeroTail=zeroHead;
    Node*oneHead=new Node(-1);
    Node*oneTail=oneHead;
    Node*twoHead=new Node(-1);
    Node*twoTail=twoHead;

    Node*curr=head;
    while(curr!=NULL)
    {
        int value=curr->data;
        if(value==0)
        {
            insertAtTail(zeroTail,curr);
        }
        else if(value==1)
        {
            insertAtTail(oneTail,curr);
        }
        else if(value==2)
        {
            insertAtTail(twoTail,curr);
        }
        curr=curr->next;
    }
    //merge 3 sublist
    if(oneHead->next!=NULL)
    {
        //1 list non empty
        zeroTail->next=oneHead->next;
        oneTail->next = twoHead->next;
    } else {
        // 1 list empty
        zeroTail->next = twoHead->next;
    }
    twoTail->next = NULL;

    // set up new head
    head = zeroHead->next;

    // delete dummy nodes
    delete (oneHead);
    delete (twoHead);
    delete (zeroHead);

    // return answer
    return head;
}

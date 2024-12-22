//APPROACH-1
class Solution
{
    private:
    void insertAtTail(Node*&head,Node*&tail,int d)
    {
        Node*newNode=new Node(d);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
        }
    }
    public:
    Node *copyList(Node *head)
    {
        //step1:create a clone list
        Node*cloneHead=NULL;
        Node*cloneTail=NULL;
        
        Node*temp=head;
        while(temp!=NULL)
        {
            insertAtTail(cloneHead,cloneTail,temp->data);
            temp=temp->next;
        }
        //step-2 create a map
        unordered_map<Node*,Node*>oldToNew;
        Node*originalNode=head;
        Node*cloneNode=cloneHead;
        while(originalNode!=NULL)
        {
            oldToNew[originalNode]=cloneNode;
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        }
        //step-3 put random pointers in clone list
        originalNode=head;
        cloneNode=cloneHead;
        while(originalNode!=NULL)
        {
            cloneNode->arb=oldToNew[originalNode->arb];
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        }
        return cloneHead;
    }

};

//APPROACH-2
class Solution
{
    private:
    void insertAtTail(Node*&head,Node*&tail,int d)
    {
        Node*newNode=new Node(d);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
        }
    }
    public:
    Node *copyList(Node *head)
    {
        //step1:create a clone list
        Node*cloneHead=NULL;
        Node*cloneTail=NULL;
        
        Node*temp=head;
        while(temp!=NULL)
        {
            insertAtTail(cloneHead,cloneTail,temp->data);
            temp=temp->next;
        }
        //step2: clone nodes add in between original list
        Node*originalNode=head;
        Node*cloneNode=cloneHead;
        while(originalNode!=NULL&&cloneNode!=NULL)
        {
          Node*next=originalNode->next;
          originalNode->next=cloneNode;
          originalNode=next;

          next=cloneNode->next;
          cloneNode->next=originalNode;
          cloneNode=next;
        }
        //step3:random pointer copy
        temp=head;
        while(temp!=NULL)
        {
            if(temp->next!=NULL)
            {
              if(temp->random!=NULL)
              {
                temp->next->random=temp->random->next;
              }
              else
              {
                temp->next=temp->random;
              }
            }
            temp=temp->next;
        }
        //step4:revert changes done in step2
        originalNode=head;
        cloneNode=cloneHead;
        while(originalNode!=NULL&&cloneNode!=NULL)
        {
          originalNode->next=cloneNode->next;;
          originalNode=originalNode->next;
          if(originalNode!=NULL)
          {
            cloneNode->next=originalNode->next;
          }
          cloneNode=cloneNode->next;
        }
        //step5:return answer
        return cloneHead;
    }
};
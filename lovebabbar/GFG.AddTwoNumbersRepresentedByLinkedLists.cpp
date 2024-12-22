class Solution
{
    private:
    Node*reverse(Node*head)
    {
        Node*curr=head;
        Node*prev=NULL;
        Node*next=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    private:
    void insertAtTail(Node*&head,Node*&tail,int value)
    {
        Node*temp=new Node(value);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    private:
    struct Node* add(struct Node*first, struct Node*second)
    {
        int sum=0,digit=0,carry=0;
        Node*ansHead=NULL;
        Node*ansTail=NULL;
        while(first!=NULL||second!=NULL||carry!=0)
        {
            int val1=0;
            if(first!=NULL)
            {
                val1=first->data;
            }
            int val2=0;
            if(second!=NULL)
            {
                val2=second->data;
            }
            sum=carry+val1+val2;
            digit=sum%10;
            //create node and add to answer LL
            insertAtTail(ansHead,ansTail,digit);
            carry=sum/10;
            if(first!=NULL)
            {
                first=first->next;
            }
            if(second!=NULL)
            {
                second=second->next;
            }
        }
        return ansHead;
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        //step-1 reverse list
        num1=reverse(num1);
        num2=reverse(num2);
        //step-2 add 2 LL
        Node*ans=add(num1,num2);
        //step-3 reverse answer
        ans=reverse(ans);
        return ans;
    }
};
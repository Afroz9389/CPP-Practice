#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
Node<int>* solve(Node<int>* first, Node<int>* second)
{ 
  //if only one element in the first list
  if(first->next==NULL)
  {
    first->next=second;
    return first;
  }
  Node<int>*curr1=first;
  Node<int>*curr2=second;
  Node<int>*next1=curr1->next;
  Node<int>*next2=curr2->next;
  while(next1!=NULL&&curr2!=NULL)
  {
      if((curr1->data<=curr2->data)&&(next1->data>=curr2->data))
      {
          //add node in between the first list
          curr1->next=curr2;
          next2=curr2->next;
          curr2->next=next1;

          //update the pointers
          curr1=curr2;
          curr2=next2;
      }
      else
      {
          //beech mein nhi h curr1 next1 window ko aage badha do
          curr1=curr1->next;
          next1=next1->next;
          if(next1==NULL)
          {
              curr1->next=curr2;
              return first;
          }
      }
  }
  return first;
}
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    //first list-empty
    if(first==NULL)
    {
        return second;
    }
    //second list-empty
    if(second==NULL)
    {
        return first;
    }
    //second list ka pehla memeber first list ke pehle memeber se bada hona chahiye
    if(first->data<=second->data)
    {
        return solve(first,second);
    } else {
        return solve(second, first);
    }
}
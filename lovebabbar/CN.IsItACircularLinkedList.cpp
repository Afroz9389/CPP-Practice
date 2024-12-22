#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

bool circularLL(Node* head)
{
    // empty list
	if(head==NULL)
	{
		return true;
	}
	//1 node & >1 node
	Node *temp=head->next;
	while(temp!=NULL&&temp!=head)
	{
		temp=temp->next;
	}
	if (temp==head)
	{
		return true;
	}
	return false;
}

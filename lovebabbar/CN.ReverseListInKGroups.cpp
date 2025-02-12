/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* kReverse(Node* head, int k) {
    //base case
    if (head == NULL) {
      return NULL;
    }
    // STEP1:reverse first k nodes
    Node *next = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;

    while (curr !=NULL&&count < k)
    {
        next=curr->next;
        curr->next=prev;
        //aage badhao
        prev=curr;
        curr=next;
        count++;
    }
    //STEP2:recursion dekh lega aage ka
    if(next!=NULL)
    {
        head->next=kReverse(next,k);
    }
    //STEP3:return head of reversed LL
    return prev;
}
/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
void inorder(BinaryTreeNode<int>*root,int&count)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,count);
    //leaf node
    if(root->left==NULL&&root->right==NULL)
    {
        count++;
    }
    inorder(root->right,count);
}
int countLeaves(Node* root)
{
  int cnt=0;
  inorder(root,cnt);
  return cnt;
}
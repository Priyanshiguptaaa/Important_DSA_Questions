
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// root: head node
Node *removeDuplicates(Node *root)
{
    // your code goes here
    Node *cur=root,*next=NULL;
    if(root==NULL)
        return NULL;
    if(root->next==NULL)
        return root;
        
    
    while(cur->next!=NULL)
    {
        if(cur->data == cur->next->data)
        {
            next=cur->next->next;
            free(cur->next);
            cur->next=next;
        }
        else
            cur=cur->next;
    }
    return root;
}

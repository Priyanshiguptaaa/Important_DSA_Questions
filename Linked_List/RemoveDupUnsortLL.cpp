/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to remove duplicates from the linked list
// root: root of the linked list
Node * removeDuplicates( Node *head) 
{
    // your code goes here
    if(!head)
        return NULL;
    if(head->next==NULL)
        return head;
        
    unordered_set<int> seen;
 
    struct Node *cur = head;
    struct Node *prev = NULL;
    struct Node *tmp=NULL;
    while (cur != NULL)
    {
        if (seen.find(cur->data) != seen.end())
        {
           prev->next = cur->next;
           tmp=cur;
           cur=cur->next;
           free(tmp);
        }
        else
        {
           seen.insert(cur->data);
           prev = cur;
           cur = cur->next;
        }
        
    }
    return head;
}

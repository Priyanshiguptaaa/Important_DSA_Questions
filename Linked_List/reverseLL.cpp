
/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

// Should reverse list and return new head.
struct Node* reverseList(struct Node *head)
{
    // code here
    Node *cur = head, *prev=NULL;
    
    while(cur)
    {
        Node *next= cur->next;
        
        cur->next = prev;
        prev=cur;
        cur=next;
    }
    head=prev;
    // return head of reversed list
    return head;
}

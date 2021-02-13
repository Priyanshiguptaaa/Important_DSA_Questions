
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
    if(head==NULL || head->next==NULL)
        return head;
    
    Node *rest=reverseList(head->next);
    
    head->next->next=head;
    
    head->next=NULL;

    // return head of reversed list
    return rest;
    
}

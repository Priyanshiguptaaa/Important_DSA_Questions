/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

void removeLoop(Node* head)
{
    // code here
    if(head == NULL || head->next == NULL)
        return;
    
    Node *fast=head;
    Node *slow=head;
    
    while((fast->next != NULL) && (fast->next->next != NULL))
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            slow=head;
            if(slow==fast)
            {
                 while(fast->next != slow) 
                 {
                     fast = fast->next;
                 }
            }
            else
            {
                while(slow->next!=fast->next)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
            }
            fast->next=NULL;
        }
            
    }
    // just remove the loop without losing any nodes
    return;
}

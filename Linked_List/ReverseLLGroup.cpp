/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

struct node *reverse (struct node *head, int k)
{ 
    // Complete this method
    if(!head)
        return NULL;
        
    if(!head->next)
        return head;
        
    node *cur = head,*next = NULL;
    node *prev=NULL;
    int n=0,flag=0;
    node *first=NULL, *prev_first=NULL;
    while(cur)
    {
        
        n=0;
        prev_first=first;
        first=cur;
        //prev=NULL;
        while(n!=k && cur!=NULL)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
            n++;
        }
        if(flag==0)
        {
            head=prev;
            flag=1;
        }
        if(prev_first!=NULL)
        {
            prev_first->next=prev;
        }
        
    }
    first->next=NULL;
    return head;
    
    
}

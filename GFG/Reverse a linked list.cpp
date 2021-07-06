class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        Node* prev=NULL, *Next=NULL;
        Node* cur = head;
        
        while(cur!=NULL){
            
            Next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=Next;
        }
        head=prev;
    }
    
};

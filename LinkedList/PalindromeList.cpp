/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* reverse(ListNode* head)
{
    ListNode*prev=NULL,*curr=head,*nxt;
    
    while(curr)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr=nxt;
    }
    
    head = prev;
    
    return head;
}
 
int Solution::lPalin(ListNode* A) {
    
    ListNode*slow= A,*fast= A,*fir= A,*sec=A;
    
    while(fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    sec = slow->next;
    slow->next = NULL;
    
    
    sec = reverse(sec);
    // cout<<sec->val<<" ";
    
    while(sec)
    {
        if(sec->val!=fir->val)
            return 0;
        sec = sec->next;
        fir = fir->next;
    }
    return 1;
    
}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* reverse(ListNode*head)
{
    ListNode *prev=NULL,*curr=head,*nxt;
    
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
ListNode* Solution::reorderList(ListNode* fir) {
    
    if(!fir || !fir->next)
        return fir;
    
    ListNode *fast=fir, *slow=fir,*sec,*res=NULL,*nxtfir,*nxtsec,*tail;
    
    while(fast->next && fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    
    sec = slow->next;
    slow->next=NULL;
    // cout<<sec->val;
    sec = reverse(sec);
    // cout<<sec->val<<" ";
    
    while(sec)
    {
        if(!res)
        {
            res = fir;
        }
        else
        {
            tail->next = fir;
        }
        tail = fir;
        nxtfir = fir->next;
        fir->next = NULL;
        fir = nxtfir;
        
        
        tail->next = sec;
        tail = sec;
        nxtsec = sec->next;
        sec->next = NULL;
        sec = nxtsec;
        
    }
    
    if(fir)
        tail->next = fir;
    
    return res;
    
}
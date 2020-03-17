/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *merge(ListNode*A, ListNode*sec)
{
    ListNode*res=NULL,*nxta,*nxtb,*tail;
    
    while(A && sec)
    {
        if(A->val<sec->val)
        {
            if(!res)
            {
                res = A;
            }
            else
            {
                tail->next = A;
            }
            tail = A;
            nxta = A->next;
            A->next=NULL;
            A = nxta;
        }
        else
        {
            if(!res)
            {
                res = sec;
            }
            else
            {
                tail->next = sec;
            }
            tail = sec;
            nxtb = sec->next;
            sec->next=NULL;
            sec = nxtb;
        }
        
    }
    
    if(A)
        tail->next = A;
    if(sec)
        tail->next = sec;
        
    return res;
}
 
// ListNode* reverse(ListNode* head)
// {
//     ListNode*prev=NULL,*curr=head,*nxt;
    
//     while(curr)
//     {
//         nxt = curr->next;
//         curr->next =prev;
//         prev = curr;
//         curr = nxt;
//     }
    
//     head = prev;
//     return head;
// }
 
// void mergesort(ListNode **A)
// {
//     ListNode *a,*b,*head=*A;
    
//     if(!head || !head->next)
//         return;
//     split(head,&a,&b);
    
//     mergesort(&a);
//     mergesort(&b);
    
//     *A = merge(a,b);
    
// }
 
ListNode* Solution::sortList(ListNode* A) {
    
    if(!A || !A->next)
        return A;
        
    ListNode *fast=A,*slow=A,*sec;
    
    while(fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    // fir = A;
    sec = slow->next;
    slow->next = NULL;
    
    return merge(sortList(A),sortList(sec));
 
}
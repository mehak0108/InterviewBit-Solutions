/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int m, int n) {
    
    ListNode* st=A,*ed=A,*prst=A,*nxted=A,*curr,*prev,*nxt;
    
    if(!st->next)
        return A;
    int ct=1;
    
    if(m!=1)
    {
        while(ct!=m-1)
        {
            prst = prst->next;
            ct++;
        }
    }
    
    if((prst!=A) || (prst==A && m!=1))
        st = prst->next;
    
    ct=1;
    while(ct!=n)
    {
        ed = ed->next;
        ct++;
    }
    nxted = ed->next;
    
    curr = st;
    prev = nxted;
    while(curr!=nxted)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    
    if(prst!=A || (prst==A && m!=1))
        prst->next = prev;
    else
        A = prev;
    
    return A;
    
}
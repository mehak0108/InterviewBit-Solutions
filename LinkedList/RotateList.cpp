/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int k) {
 
    
    int n,ct=1;
    ListNode* cur=A,*last=A,*prev=NULL,*head=A;
    
    while(last->next)
    {
        ct++;
        last=last->next;
    }
   
    k = k%ct;
    
    if(ct==1)
        return A;
    
    n = ct-k;
    
    if(k==0)
        return A;
    
    int l=1;
    
    while(l!=n && cur)
    {
        l++;
        cur = cur->next;
    }
    
    prev = cur->next;
    cur->next = NULL;
    last->next = head;
    
    return prev;
    
}
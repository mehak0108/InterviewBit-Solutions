/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    
    ListNode* curr=A,*nexta;
    int l=1;
    
    while(curr->next)
    {
        l++;
        curr=curr->next;
    }
    
    if(B>=l)
    {
        nexta = A->next;
        A->next = NULL;
        return nexta;
    }
    
    int n = l-B;
    int ct=1;
    curr = A;
    while(ct!=n)
    {
        ct++;
        curr = curr->next;
    }
    
    if(B==1)
    {
        curr->next = NULL;
    }
    else if(curr->next && curr->next->next)
    {
        nexta = curr->next->next;
        curr->next->next = NULL;
        curr->next = nexta;
    }
    
    
    return A;
    
    
}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    
    if(!A || !A->next)
        return A;
    ListNode* prev = A,*curr,*nxt;
    
    curr = A->next->next;
    A = A->next;
    A->next = prev;
    
    while(curr && curr->next)
    {
        prev->next = curr->next;
        prev = curr;
        nxt = curr->next->next;
        curr->next->next = curr;
        curr = nxt;
    }
    
    prev->next = curr;
    
    return A;
}
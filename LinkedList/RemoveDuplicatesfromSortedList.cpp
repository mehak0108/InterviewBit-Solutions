/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    
    ListNode* cur=A;
    
    while(cur->next!=NULL)
    {
        if(cur && cur->next && cur->val == cur->next->val)
            cur->next = cur->next->next;
        else
            cur = cur->next;
    }
    
    return A;
}
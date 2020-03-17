/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 
    ListNode *slow=A, *fast=A,*curr=A;
    
    while(slow || fast)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast==slow)
        {
            break;
        }
        if(!fast || !fast->next)
            return NULL;
    }
    
    while(fast!=curr)
    {
        fast = fast->next;
        curr = curr->next;
    }
    
    return curr;
}
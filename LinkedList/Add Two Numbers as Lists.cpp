/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    
    ListNode* res=NULL,*tail;
    int carry=0,sum;
    while(A!=NULL || B!=NULL)
    {
        sum = (A? A->val : 0) + (B?  B->val : 0) + carry;
        carry = sum/10;
        ListNode* n = new ListNode(sum%10);
        if(!res)
        {
            res = n;
        }
        else
        {
            tail->next = n;
        }
        tail = n;
         
        if(A)
            A = A->next;
        if(B)
            B = B->next;
        // sum=0;    
        // if(A)
        //     cout<<A->val<<" ";
        // if(B)
        //     cout<<B->val<<" ";    
    }
    
    if(carry>0)
    {
        ListNode* p = new ListNode(carry);
        tail->next = p;
    }    
    return res;
}
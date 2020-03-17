/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    
    ListNode* res=NULL,*cura = A,*curb = B,*tail,*nexta=A,*nextb=B;
    
    while(cura && curb)
    {
        if(cura->val < curb->val)
        {
            if(!res)
            {
                res = cura;
                tail = res;
            }
            else
            {
                tail->next = cura;
                tail = cura;
            }
            
            nexta = cura->next;
            cura->next = NULL;
            cura = nexta;
            // cura = cura->next;
        }
        else
        {
            if(!res)
            {
                res = curb;
                tail = res;
            }
            else
            {
                tail->next = curb;
                tail = curb;
            }
            
            nextb = curb->next;
            curb->next = NULL;
            curb = nextb;
        }
        
    }
    
    // cout<<cura->val<<" ";
    // cout<<tail->val<<" ";
    if(cura)
    {
        tail->next = cura;
        // tail=cura;
    }
    if(curb)
        tail->next = curb;
    
    return res;
}
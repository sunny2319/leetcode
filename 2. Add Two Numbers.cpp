/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* l3=new ListNode(0);
        ListNode* l4=l3;
            
        while(l1!=NULL and l2!=NULL)
        {
            int x=l1->val+l2->val+carry;
            ListNode* l5=new ListNode(x%10);
            l4->next=l5;
            l4=l4->next;
            carry=x/10;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            int x=l1->val+carry;
            ListNode* l5=new ListNode(x%10);
            l4->next=l5;
            l4=l4->next;
            carry=x/10;
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            int x=l2->val+carry;
            ListNode* l5=new ListNode(x%10);
            l4->next=l5;
            l4=l4->next;
            carry=x/10;
            l2=l2->next;
        }
        if(carry==1)
        {
            ListNode* l5=new ListNode(1);
            l4->next=l5;
        }
        return l3->next;
    }
    
};

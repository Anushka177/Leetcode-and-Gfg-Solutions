/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       
        ListNode* p=head;
        int t=0;
        while(p!=NULL)
        {
            t++;
            p=p->next;
        }
        int z=t-n;
          ListNode* a; 
        ListNode* b;
        a=head;
        
        for(int i=0;i<=z-1;i++)
        {
            b=a;
            a=a->next;
        }
         if(a==NULL) return 0;
    if(a==head)
        head=head->next;
    else
    {
        b->next=a->next;
    }
        delete(a);
        return head;
    }
    
};
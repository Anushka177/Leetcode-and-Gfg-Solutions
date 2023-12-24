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
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nextptr;
        while(curr!=NULL)
        {
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        }
        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //l1=reverse(l1);
       // l2=reverse(l2);
        ListNode* temp;
        ListNode* res=NULL;
        ListNode* curr=NULL;
        int sum=0;
        int carry=0;
        while(l1!=NULL || l2!=NULL)
        {
            sum=(l1?l1->val:0)+(l2?l2->val:0)+carry;
            carry=sum/10;
            sum=sum%10;
            temp=new ListNode(sum);
            if(res==NULL) res=temp;
            else {
            curr->next=temp;
            }
            curr=temp;
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        if(carry>0)
        {
            temp=new ListNode(carry);
            curr->next=temp;
            curr=temp;
        }
       // res =reverse(res);
        return res;
    }
};
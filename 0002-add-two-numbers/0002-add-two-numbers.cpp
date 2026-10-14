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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* dummy=new  ListNode(-1);
        ListNode* current=dummy;
        if(temp1==nullptr && temp2==nullptr)return nullptr;
        int carry=0;
        while(temp1 || temp2){
            int sum=0;
            sum+=carry;
            if(temp1)sum+=temp1->val;
            if(temp2)sum+=temp2->val;
            carry=sum/10;
            sum=sum%10;
            ListNode* nextNode=new ListNode(sum);
            current->next=nextNode;
            current=current->next;
            if(temp1!=NULL)temp1=temp1->next;
            if(temp2!=NULL)temp2=temp2->next;
        }
        if(carry){
           ListNode*  newNode=new ListNode(carry);
           current->next=newNode;
        }
    return dummy->next;
    }
};
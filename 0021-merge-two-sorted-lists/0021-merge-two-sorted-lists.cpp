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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* ansHead = new ListNode();
        ListNode* ansTemp = ansHead;
        if (list1 == NULL && list2 == NULL)
            return nullptr;
        if (list1 && list2 == nullptr)
            return list1;
        if (list2 && list1 == nullptr)
            return list2;
        while (temp1 && temp2) {
            if (temp1->val <= temp2->val) {
                ansTemp->next = new ListNode(temp1->val);
                ansTemp = ansTemp->next;
               
                temp1 = temp1->next;
            }
             else if (temp1->val > temp2->val) {
                ansTemp->next = new ListNode(temp2->val);
                ansTemp = ansTemp->next;
               
                temp2 = temp2->next;
            }
        }
       
        while (temp1!=nullptr) {
            ansTemp->next = new ListNode(temp1->val);
            ansTemp = ansTemp->next;
           
            temp1 = temp1->next;
        }

         while(temp2!=nullptr){
            ansTemp->next = new ListNode(temp2->val);
            ansTemp = ansTemp->next;
            temp2 = temp2->next;
        }

        return ansHead->next;
    }
};
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL or head->next==NULL){
            return head;
        }
        int temp=head->val;
        ListNode* temphead=head->next;
        ListNode* prev=head;
        while(temphead!=NULL){
            if(temphead->val!=temp){
                temp=temphead->val;
                prev=temphead;
                temphead=temphead->next;
            }
            else{
                prev->next=temphead->next;
                temphead=prev->next;
            }
        }
        return head;
    }
};
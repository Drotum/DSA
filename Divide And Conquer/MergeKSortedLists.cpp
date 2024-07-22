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
    ListNode* sortlist(ListNode* list1, ListNode* list2){
        ListNode* temp = new ListNode(INT_MIN);
        ListNode* curr = temp;
        while(list1 && list2){
            if(list1->val >= list2->val){
                curr->next = list2;
                list2 = list2->next;
            }
            else{
                curr->next = list1;
                list1 = list1->next;
            }
            curr = curr->next;
            curr->next = NULL;
        }
        if(list1){
            curr->next = list1;
        }
        if(list2){
            curr->next = list2;
        }
        return temp->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {    
        int n = lists.size();
        ListNode* ans = NULL;
        for(int i = 0; i < n; i++){
            ans = sortlist(ans, lists[i]);
        }
        return ans;
    }
};
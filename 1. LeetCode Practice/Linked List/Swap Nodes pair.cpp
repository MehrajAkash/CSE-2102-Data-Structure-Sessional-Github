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
    ListNode* swapPairs(ListNode* head) {
        ListNode* first = head;
        ListNode* dummy = new ListNode(0);
        ListNode* prev = dummy;
        dummy->next = head;
        prev->next = head;

        while( first && first->next ){
            ListNode* second = first->next;
            ListNode* future = first->next->next;
            first->next = future;
            second->next = first;
            prev->next = second;

            prev = first;
            first = future;
        }
        return dummy->next;
    }
};

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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head==nullptr || k==0) return head;

        ListNode* tmp = head;
   //     ListNode* prev;
        int n=0;
        while(tmp->next){
            tmp = tmp->next;
            n++;
        }
       tmp->next = head;

       tmp = head;

       k = k%(n+1);

        int val = (n-k);

       while(val--){
         tmp = tmp->next;
       }

        ListNode* Rhead = tmp->next;

      tmp->next = NULL;


      return Rhead;

    }
};

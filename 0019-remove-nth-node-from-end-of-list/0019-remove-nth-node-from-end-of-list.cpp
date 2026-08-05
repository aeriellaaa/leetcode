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
        ListNode* dummy =  new ListNode(0);
        dummy->next = head;
        int len = 0;
        ListNode* l  = head;
        while(l!=nullptr){
            len = len +1;
            l = l->next;
        }
        int d = len-n;
        ListNode* prev = dummy;
        ListNode* curr = head;
        int i  = 0;
        while(i<d){
            prev= prev->next;
            i=i+1;

        }
        prev->next=prev->next->next;
        return dummy->next;
        
    }
};
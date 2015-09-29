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
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
        ListNode *one = head, *two = head;
        while (two->next && two->next->next) {
            one = one->next;
            two = two->next->next;
        }
        ListNode *tail = one->next, *pre = head;
        while (tail->next) {
            ListNode *tmp = tail->next;
            tail->next = tmp->next;
            tmp->next = one->next;
            one->next = tmp;
        }
        while (one->next) {
            one = one->next;
            if (pre->val != one->val) return false;
            pre = pre->next;
        }
        return true;
    }
};
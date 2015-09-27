/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *one, *two;
    one = two = head;
    while (one != NULL && two != NULL) {
        one = one->next;
        if (one == NULL) {
            break;
        }
        two = two->next;
        if (two == NULL) {
            break;
        }
        two = two->next;
        if (two == NULL) {
            break;
        }
        if (two->val == one->val) {
            return 1;
        }
    }
    return 0;
}
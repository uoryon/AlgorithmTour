/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *n, *p;
    if (head == NULL) return NULL;
    n = head;
    head = head->next;
    n->next = NULL;
    while (head != NULL) {
        p = head->next;
        head->next = n;
        n = head;
        head = p;
    }
    return n;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *n, *p;
    n = (struct ListNode *)malloc(sizeof(struct ListNode));
    p = n;
    while (l1 != NULL || l2 != NULL) {
        if (l1 == NULL) {
            p->next = l2;
            l2 = l2->next;
        } else if (l2 == NULL) {
            p->next = l1;
            l1 = l1->next;
        } else {
            if (l1->val > l2->val) {
                p->next = l2;
                l2 = l2->next;
            } else {
                p->next = l1;
                l1 = l1->next;
            }
        }
        p = p->next;
    }
    p = n->next;
    free(n);
    return p;
}

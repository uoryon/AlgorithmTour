/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode *l = NULL, *g = NULL, *p = NULL;
    if (head == NULL) return NULL;
    p = head;
    while (p != NULL) {
        if (p->val >= x) {
            g = p;
            break;
        }
        l = p;
        p = p->next;
    }
    while (g != NULL && g->next != NULL) {
        if (g->next->val >= x) {
            g = g->next;
        } else {
            p = g->next;
            g->next = g->next->next;
            if (l == NULL) {
                p->next = head;
                l = p;
                head = l;
            } else {
                p->next = l->next;
                l->next = p;
                l = l->next;
            }
        }
    }
    return head;
}

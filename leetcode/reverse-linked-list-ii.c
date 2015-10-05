/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int m, int n) {
    int i = 1;
    struct ListNode *h, *now, *prev, *t;
    h = now = prev = t = NULL;
    now = head;
    while(now != NULL) {
        if (i == m) {
            h = prev;
            t = now;
        } else if (m < i && i < n) {
            struct ListNode *temp = now->next;
            now->next = prev;
            prev = now;
            now = temp;
            i++;
            continue;
        } else if (i == n) {
            if (h != NULL) {
                h->next = now;
            } else {
                head = now;
            }
            t->next = now->next;
            now->next = prev;
            break;
        }
        prev = now;
        now = now->next;
        i++;
    }
    return head;
}

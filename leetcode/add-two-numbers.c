/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *n, *p;
    n = (struct ListNode *)malloc(sizeof(struct ListNode));
    p = n;
    int extra = 0;
    while (1) {
        int sum = extra;
        if (l1 != NULL) {
            sum+=l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum+=l2->val;
            l2 = l2->next;
        }
        p->val = sum%10;
        extra = sum / 10;
        if (l1!=NULL || l2 != NULL) {
            p->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            p = p->next;
        } else {
            break;
        }
    }
    return n;
}
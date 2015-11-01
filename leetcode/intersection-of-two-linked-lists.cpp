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
    int listLength(ListNode *head) {
        int a = 0;
        ListNode *p = head;
        while (p != NULL) {
            p = p->next;
            a++;
        }
        return a;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *pa = headA, *pb = headB;
        int lenA = listLength(headA), lenB = listLength(headB), delta;
        if (lenA == 0  || lenB == 0) return NULL;
        if (lenA > lenB) {
            delta = lenA - lenB;
            while(delta --) {
                pa = pa->next;
            }
        } else {
            delta = lenB - lenA;
            while(delta--) {
                pb = pb->next;
            }
        }
        while(pa != NULL && pb != NULL && pa != pb) {
            pa = pa->next;
            pb = pb->next;
        }
        return pa;
    }
};

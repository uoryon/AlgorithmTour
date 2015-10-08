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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *root, *p;
        priority_queue<int, std::vector<int>, std::greater<int> > q;
        for (int i = 0; i < lists.size(); i++) {
            p = lists[i];
            while (p != NULL) {
                q.push(p->val);
                p = p->next;
            }
        }
        root = (new ListNode(0));
        p = root;
        while (!q.empty()) {
            p->next = (new ListNode(q.top()));
            q.pop();
            p = p->next;
        }
        return root->next;
    }
};

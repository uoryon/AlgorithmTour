/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int out = 0;
        queue<TreeNode *> q;
        priority_queue<int, vector<int>, greater<int> > q2;
        q.push(root);
        while (!q.empty()) {
            TreeNode *p = q.front();
            q.pop();
            if (p != NULL) {
                q2.push(p->val);
                q.push(p->left);
                q.push(p->right);
            }
        }
        while(k--) {out = q2.top();q2.pop();};
        return out;
    }
};


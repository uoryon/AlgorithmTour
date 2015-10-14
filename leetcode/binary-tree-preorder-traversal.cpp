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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> r;
        stack<TreeNode *> s;
        TreeNode* p;
        s.push(root);
        while(!s.empty()) {
            p = s.top();
            s.pop();
            if (p != NULL) {
                r.push_back(p->val);
                if (p->right) s.push(p->right);
                if (p->left) s.push(p->left);
            }
        }
        return r;
    }
};

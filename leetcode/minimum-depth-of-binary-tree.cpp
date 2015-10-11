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
    int minDepth(TreeNode* root) {
        queue < pair <TreeNode *, int> > heap;
        if (!root) return 0;
        heap.push(make_pair(root, 1));
        while (!heap.empty()) {
            pair<TreeNode*, int> p = heap.front();
            heap.pop();
            if (p.first->left == NULL && p.first->right == NULL) return p.second;
            if (p.first->left) heap.push(make_pair(p.first->left, p.second+1));
            if (p.first->right) heap.push(make_pair(p.first->right, p.second+1));
        }
        return 0;
    }
};

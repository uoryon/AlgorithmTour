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
    int countNodes(TreeNode* root) {
        if (root == NULL) return 0;
        int hl = 0, hr = 0;
        TreeNode *l,*r;
        l = r = root;
        while(l != NULL) {hl++; l = l->left;}
        while(r != NULL) {hr++; r = r->right;}
        if (hl == hr) return pow(2, hl) - 1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};

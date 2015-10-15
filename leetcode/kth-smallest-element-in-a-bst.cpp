/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
int t = 0;
int out = 0;
void o(struct TreeNode *root, int k) {
    if (root) {
        o(root->left, k);
        if (k == t) return;
        t++;
        out = root->val;
        o(root->right, k);
    }
}
 
int kthSmallest(struct TreeNode* root, int k) {
    t = 0, out = 0;
    o(root, k);
    return out;
}

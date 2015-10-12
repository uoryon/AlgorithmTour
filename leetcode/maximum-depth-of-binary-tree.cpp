/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int max;
void goDown(struct TreeNode* root, int depth) {
    if (root != NULL) {
        if (depth> max) max = depth;
        if (root->left) goDown(root->left, depth+1);
        if (root->right) goDown(root->right, depth+1);
    }
}

int maxDepth(struct TreeNode* root) {
    max = 0;
    if (root == NULL) return 0;
    goDown(root, 1);
    return max;
}

//https://leetcode.com/problems/invert-binary-tree/#/description

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    struct Treenode *p=NULL;  
    if(!root)
        return root;

    p = invertTree(root->left);    
    root->left = invertTree(root->right);   
    root->right = p; 

    return root;
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


 /*
int Traverse(struct TreeNode* p)
{
    int leftDepth, rightDepth;
    if(p == NULL)
        return NULL;

    leftDepth = Traverse(p);
    rightDepth = Traverse(p);
        
    return (leftDepth>rightDepth)?(leftDepth+1): (rightDepth+1);
}
*/
int max(int x,int y)
{
    return (x>y)?x:y;
}
 
int maxDepth(struct TreeNode* root) 
{
    return root == NULL ? 0 : max(maxDepth(root -> left), maxDepth(root -> right)) + 1;
}

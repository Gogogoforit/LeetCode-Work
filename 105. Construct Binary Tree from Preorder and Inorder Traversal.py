link: https://leetcode.cn/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/

Method 1: Naive one

class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> Optional[TreeNode]:
        if not preorder:  # 空节点
            return None
        left_size = inorder.index(preorder[0])  # 左子树的大小
        left = self.buildTree(preorder[1: 1 + left_size], inorder[:left_size])
        right = self.buildTree(preorder[1 + left_size:], inorder[1 + left_size:])
        return TreeNode(preorder[0], left, right)


Method 2: A better version

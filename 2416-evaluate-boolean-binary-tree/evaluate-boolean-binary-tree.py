# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def opp(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return True
        if root.left is None and root.right is None:
            if root.val==1:
                return True
            return False
        
        left= self.opp(root.left)
        right= self.opp(root.right)

        if root.val==2:
            return left or right
        
        return left and right

        
    def evaluateTree(self, root: Optional[TreeNode]) -> bool:
        return self.opp(root)
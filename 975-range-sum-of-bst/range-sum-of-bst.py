# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def dfs(self, root: Optional[TreeNode], low: int, high: int, ans):
        if root is None:
            return

        self.dfs(root.left, low, high, ans)
        if low <= root.val <= high:
            ans[0] += root.val
        self.dfs(root.right, low, high, ans)

    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        ans = [0]
        self.dfs(root, low, high, ans)
        return ans[0]
        
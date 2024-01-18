/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean opp(TreeNode root){
        if(root.left==null && root.right==null){
            if(root.val==1)
                return true;
            return false;
        }

        boolean left = opp(root.left);
        boolean right = opp(root.right);

        if(root.val==2)
            return left || right;
        
        return left && right;
    }
    public boolean evaluateTree(TreeNode root) {
        return opp(root);
    }
}
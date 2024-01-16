/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int v) {
        if(!root) return root;
        TreeNode* ans;
        if(root->val==v) return root;
        if(root->val>v)
            ans=searchBST(root->left,v);
        else
            ans=searchBST(root->right,v);
        
        return ans;
    }
};
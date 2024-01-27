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
    int min_diff=100001;
    int prev=-1;
    int in(TreeNode* root){
        if(root==NULL) return min_diff;

        in(root->left);
        if(prev!=-1){
            min_diff=min(min_diff,root->val-prev);
        }
        if(root!=NULL){
            prev=root->val;
        }
        in(root->right);

        return min_diff;
    }
public:
    int getMinimumDifference(TreeNode* root) {
        return in(root);
    }
};
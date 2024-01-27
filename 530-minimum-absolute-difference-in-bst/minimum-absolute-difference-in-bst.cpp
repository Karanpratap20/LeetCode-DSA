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
    void in(TreeNode* root,vector<int>& v){
        if(root==NULL) return;

        in(root->left,v);
        v.push_back(root->val);
        in(root->right,v);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        vector<int> v;
        in(root,v);
        int mx=100001;
        for(int i=1;i<v.size();i++){
            int x=abs(v[i]-v[i-1]);
            mx=min(mx,x);
        }
        return mx;
    }
};
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
    void func(TreeNode* root,vector<TreeNode*>& v){
        if(root==NULL) return;

        func(root->left,v);
        v.push_back(root);
        func(root->right,v);
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL) return NULL;
        vector<TreeNode*> ans;

        func(root,ans);

        root=ans[0];
        TreeNode* temp=root;
        for(int i=1;i<ans.size();i++){
            TreeNode* node=ans[i];

            temp->left=NULL;
            temp->right=node;
            temp=node;
        }

        temp->left=NULL;
        temp->right=NULL;
        return root;
    }
};
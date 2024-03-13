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
    priority_queue<int> pq;
    void fun(TreeNode* root){
        if(root==NULL) return;

        fun(root->left);
        pq.push(root->val);
        fun(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        fun(root);

        while(pq.size()!=k){
            pq.pop();
        }

        return pq.top();
    }
};
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
    void fun(TreeNode* root,priority_queue<int>& pq){
        if(root==NULL) return;

        fun(root->left,pq);
        pq.push(root->val);
        fun(root->right,pq);
    }
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int> pq;
        fun(root,pq);

        while(pq.size()!=k){
            pq.pop();
        }

        return pq.top();
    }
};
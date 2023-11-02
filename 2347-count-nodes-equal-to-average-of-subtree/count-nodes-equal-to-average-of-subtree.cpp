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
    pair<int,int> fnc(TreeNode* n,int& count){
        if(n==NULL) return {0,0};
        
        auto l=fnc(n->left,count);
        auto r=fnc(n->right,count);
        
        int sum=l.first + r.first + n->val;
        int ele=l.second + r.second + 1;

        if(sum/ele == n->val) count++;

        return {sum,ele};
    }
public:
    int averageOfSubtree(TreeNode* root) {
        int count=0;
        fnc(root,count);
        return count;
    }
};
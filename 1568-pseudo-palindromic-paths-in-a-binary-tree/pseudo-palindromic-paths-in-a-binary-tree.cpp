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
    int pseudoPalindromicPaths(TreeNode* root) {

        vector<int> digits(10, 0);
        return dfs(root, digits);
    }

private:
    int dfs(TreeNode* root, vector<int>& digits) {
        if (root == nullptr) return 0;

        digits[root->val]++;

        if (root->left == nullptr && root->right == nullptr) {
            int cnt = countOdd(digits);
            digits[root->val]--;
           
            return (cnt <= 1) ? 1 : 0;
        }

        int leftCount = dfs(root->left, digits);
        int rightCount = dfs(root->right, digits);

        digits[root->val]--;

        return leftCount + rightCount;
    }

    int countOdd(const vector<int>& digits) {
        int cnt = 0;
        
        for (int i = 1; i < 10; ++i) {
            if ((digits[i]) & 1) cnt++;
        }
        return cnt;
    }
};
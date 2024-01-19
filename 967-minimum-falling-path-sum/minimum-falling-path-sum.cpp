class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        const int M = 1e9 + 7, n = matrix.size();
        if (n==1) return matrix[0][0];
        vector<int> dp(n, M), f1;
        f1=matrix.back();
        for (int i=n-2; i>=0; i--){
            for (int j=0; j < n; j++) {
                dp[j]=matrix[i][j]+min({f1[max(0, j-1)], f1[j], f1[min(n-1, j+1)]});
            }
            f1=dp;
        }
        return *min_element(dp.begin(), dp.end());
    }
};
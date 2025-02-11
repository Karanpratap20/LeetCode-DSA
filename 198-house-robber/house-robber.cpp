class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,0);

        dp[0]=nums[0];

        for(int i=1;i<n;i++){
            int a=nums[i];
            if(i>1) a+=dp[i-2];
            int b=dp[i-1];

            dp[i]=max(a,b);
        }

        return dp[n-1];
    }
};
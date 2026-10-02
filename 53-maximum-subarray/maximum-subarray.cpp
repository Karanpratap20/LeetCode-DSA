class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        int maxi=nums[0];
        for(int i=1;i<n;i++){
            sum=max(nums[i],sum+nums[i]);
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};
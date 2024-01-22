class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return n;

        int maxi=1;
        int count=1;

        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                count++;
                maxi=max(maxi,count);
            }
            else{
                count=1;
            }
        }
        return maxi;
    }
};
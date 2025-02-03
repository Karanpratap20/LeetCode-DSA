class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int mx=1;

        int ci=1,cd=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                ci++;
                cd=1;
            }
            else if(nums[i]>nums[i+1]){
                cd++;
                ci=1;
            }
            else{
                ci=1;
                cd=1;
            }
    
            mx=max(mx,max(ci,cd));
        }

        return mx;
    }
};
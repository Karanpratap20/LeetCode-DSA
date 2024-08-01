class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        int mx=INT_MIN;
        while(i<j){
            int h=min(nums[i],nums[j]);
            int w=j-i;
            mx=max(mx,(w*h));
            if(nums[i]<nums[j]){
                i++;
            }else{
                j--;
            }
        }

        return mx;
    }
};
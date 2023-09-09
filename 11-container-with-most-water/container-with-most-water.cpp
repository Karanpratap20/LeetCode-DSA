class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        int maxi=0;
        while(i<j){
            int h = min(nums[i], nums[j]);
            int w = j - i;
            int area = h * w;
            if(nums[i]<nums[j]){
                i++;
            }
            else{
                j--;
            }
            maxi=max(area,maxi);
        }
        return maxi;
    }
};
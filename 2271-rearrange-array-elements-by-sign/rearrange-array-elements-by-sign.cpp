class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);

        int i=0;
        int x=0,y=1;
        while(i<n){
            if(nums[i]>0){
                ans[x]=nums[i];
                x+=2;
            }
            else{
                ans[y]=nums[i];
                y+=2;
            }
            i++;
        }

        return ans;
    }
};
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        int k=n-1;
        vector<int> ans(n,0);
        while(i<=j){
            if(abs(nums[i])<abs(nums[j])){
                ans[k]=nums[j]*nums[j];
                k--;
                j--;
            }else{
                ans[k]=nums[i]*nums[i];
                k--;
                i++;
            }
        }

        return ans;
    }
};
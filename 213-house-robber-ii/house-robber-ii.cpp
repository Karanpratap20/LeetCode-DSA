class Solution {
public:
    int rob1(int start,int n,vector<int>& nums) {
        int prev=nums[start],prev2=0;

        for(int i=start+1;i<n;i++){
            int curr=max(nums[i]+prev2,prev);
            prev2=prev;
            prev=curr;
        }

        return prev;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int m1=rob1(0,n-1,nums);
        int m2=rob1(1,n,nums);

        return max(m1,m2);
    }
};
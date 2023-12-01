class Solution {
public:
    int countBit(int n){
        int ans=0;
        while(n){
            if(n&1==1) ans++;
            n>>=1;
        }
        return ans;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(countBit(i)==k){
                sum+=nums[i];
            }
        }
        return sum;
    }
};
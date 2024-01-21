class Solution {
public:
    int rob(vector<int>& nums) {
        int s1=0,s2=0;
        for(int i=0;i<nums.size();i++){
            int ns1=s2+nums[i];
            int ns2=max(s2,s1);
            s1=ns1;
            s2=ns2;
        }
        return max(s1,s2);
    }
};
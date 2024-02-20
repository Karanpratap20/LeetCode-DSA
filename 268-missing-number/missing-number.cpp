class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s1=0;
        for(int i=1;i<=nums.size();i++){
            s1+=i;
        }
        int s2=0;

        for(int& it:nums){
            s2+=it;
        }

        return s1-s2;
    }
};
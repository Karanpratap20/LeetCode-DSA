class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int count=0;
        int ans=0;

        for(int& it:nums){
            ans+=it;
            if(ans==0) count++;
        }

        return count;
    }
};
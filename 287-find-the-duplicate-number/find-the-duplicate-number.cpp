class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int ind=abs(nums[i])-1;
            if(nums[ind]<0){
                return abs(nums[i]);
            }
            nums[ind]*=-1;
        }
        return -1;
    }
};
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0;
        while(i<n){
            if(nums[i]==val){
                swap(nums[i],nums[n-1]);
                nums.pop_back();
                n--;
            }
            else{
                i++;
            }
        }
        return nums.size();
    }
};
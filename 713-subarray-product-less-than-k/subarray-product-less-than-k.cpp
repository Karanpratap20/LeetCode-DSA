class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        
        int count=0;

        for(int i=0;i<n;i++){
            int pro=1;
            for(int j=i;j<n;j++){
                pro*=nums[j];
                if(pro<k){
                    count++;
                }else{
                    break;
                }
            }
        }

        return count;
    }
};
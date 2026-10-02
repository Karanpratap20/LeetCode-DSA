class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ct=0;
        int el;
        for(int i=0;i<nums.size();i++){
            if(ct==0){
                ct=1;
                el=nums[i];
            }
            else if(nums[i]==el){
                ct++;
            }
            else{
                ct--;
            }
        }

        return el;
    }
};
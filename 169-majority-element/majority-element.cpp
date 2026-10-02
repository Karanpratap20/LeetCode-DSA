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
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==el){
        //         count++;
        //     }
        // }
        // if(count > (nums.size()/2)){
        //     return el;
        // }
        // return -1;
    }
};
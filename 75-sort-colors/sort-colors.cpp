class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;

        for(int it:nums){
            if(it==0)z++;
            else if(it==1)o++;
            else t++;
        }

        for(int i=0;i<nums.size();i++){
            if(z){
                nums[i]=0;
                z--;
            }
            else if(o){
                nums[i]=1;
                o--;
            }
            else{
                nums[i]=2;
            }
        }
    }
};
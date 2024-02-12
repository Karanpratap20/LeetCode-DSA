class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int pro=1;
        int p=1;
        for(int& it:nums){
            pro*=it;
            if(it!=0){
                p*=it;
            }
        }

        for(int& it:nums){
            if(it!=0){
                ans.push_back(pro/it);
            }
            else{
                ans.push_back(p);
            }
        }
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                int pr=1;
                for(int j=0;j<n;j++){
                    if(i==j){
                        continue;
                    }else{
                        pr*=nums[j];
                    }
                }
                ans[i]=pr;
            }
        }
        return ans;
    }
};
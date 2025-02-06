class Solution {
public:
    void subset(vector<int>& nums,vector<vector<int>>& ans,vector<int>& ds,int i){
        if(i==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        subset(nums,ans,ds,i+1);
        ds.pop_back();
        subset(nums,ans,ds,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;  
        vector<int> ds;
        subset(nums,ans,ds,0);
        return ans;  
    }
};
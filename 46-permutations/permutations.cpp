class Solution {
public:
    void per(vector<int>& nums,vector<vector<int>>& ans,vector<int>& ds,vector<bool>& visited){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int j=0;j<nums.size();j++){
            if(!visited[j]){
                ds.push_back(nums[j]);
                visited[j]=true;
                per(nums,ans,ds,visited);

                visited[j]=false;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<bool> visited(nums.size(),false);

        per(nums,ans,ds,visited);

        return ans;
    }
};
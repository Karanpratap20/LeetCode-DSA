class Solution {
public:
    void per(vector<int>& nums,vector<vector<int>>& ans,vector<int>& ds,vector<bool>& visited){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int j=0 ;j<nums.size();j++){
            if(!visited[j]){
                ds.push_back(nums[j]);
                visited[j]=true;
                per(nums,ans,ds,visited);

                visited[j]=false;
                ds.pop_back();
            }
        }
    }
    void per1(vector<int>& nums,vector<vector<int>>& ans,int i){
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            per1(nums,ans,i+1);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;

        per1(nums,ans,0);

        return ans;
    }
};
class Solution {
public:
    void pick(vector<int>& c,vector<int>& ds,vector<vector<int>>& ans,int i,int target){
        if (target == 0) {
            ans.push_back(ds);
            return;
        }
        if(i==c.size() || target<0){
            return;
        }
        ds.push_back(c[i]);
        pick(c,ds,ans,i,target-c[i]);

        ds.pop_back();
        pick(c,ds,ans,i+1,target);
    }
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        int n=c.size();
        vector<int> ds;
        vector<vector<int>> ans;
        pick(c,ds,ans,0,target);

        return ans;
    }
};
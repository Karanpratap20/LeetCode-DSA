class Solution {
public:
    void pick(vector<int>& c, vector<int>& ds, vector<vector<int>>& ans, int i, int target) {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }
        for (int j = i; j < c.size(); j++) {
            if (j > i && c[j] == c[j - 1]) continue; 
            if (c[j] > target) break; 
            
            ds.push_back(c[j]);
            pick(c, ds, ans, j + 1, target - c[j]); 
            ds.pop_back(); 
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(c.begin(), c.end());
        pick(c, ds, ans, 0, target);
        return ans;
    }
};

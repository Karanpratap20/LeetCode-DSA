class Solution {
public:
    void dfs(unordered_map<int,vector<int>>& mp,unordered_set<int>& st,int a,vector<int>& v){
        if(st.find(a)!=st.end()) return;
        v.push_back(a);
        st.insert(a);
        for(auto x:mp[a]) dfs(mp,st,x,v);
    }
    vector<int> restoreArray(vector<vector<int>>& A) {
        unordered_map<int,vector<int>> mp;
        for(auto it:A){
            mp[it[0]].push_back(it[1]);
            mp[it[1]].push_back(it[0]);
        }
        int head;
        for(auto it:mp){
            if(it.second.size()==1){
                head=it.first;
            }
        }
        unordered_set<int> st;
        vector<int> v;

        dfs(mp,st,head,v);

        return v;
    }
};
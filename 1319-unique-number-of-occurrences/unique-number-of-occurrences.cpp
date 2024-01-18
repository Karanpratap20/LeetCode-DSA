class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto& it:arr){
            mp[it]++;
        }
        unordered_set<int> s;
        for(auto& it:mp){
            s.insert(it.second);
        }

        return mp.size()==s.size();
    }
};
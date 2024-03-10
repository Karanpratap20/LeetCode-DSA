class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;

        for(int& it:nums2){
            mp[it]++;
        }
        set<int> st;
        for(int& it:nums1){
            if(mp.find(it)!=mp.end()){
                st.insert(it);
            }
        }

        vector<int> ans;

        for(auto& it:st){
            ans.push_back(it);
        }
        return ans;
    }
};
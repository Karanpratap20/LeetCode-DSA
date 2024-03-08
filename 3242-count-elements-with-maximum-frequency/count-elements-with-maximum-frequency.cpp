class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int& it:nums){
            mp[it]++;
        }
        
        int mx=0;
        for(auto& it:mp){
            mx=max(mx,it.second);
        }
        
        int c=0;
        for(auto& it:mp){
            if(it.second==mx) c++;
        }

        return c*mx;
    }
};
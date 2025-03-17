class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        if(n%2!=0) return false;
        unordered_map<int,int> mp;

        for(int it:nums){
            mp[it]++;
        }

        for(auto it:mp){
            if(it.second%2!=0)return false;
        }

        return true;
    }
};
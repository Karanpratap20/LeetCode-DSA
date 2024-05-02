class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int it:nums){
            if(it<0) mp[it]++;
        }
        int mx=-1;
        for(int it:nums){
            if(it>0 && mp.find(-1*it)!=mp.end()){
                mx=max(it,mx);
            }
        }

        return mx;
    }
};
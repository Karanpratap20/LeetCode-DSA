class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int& it:nums){
            if(mp.find(it)!=mp.end()){
                return it;
            }
            mp[it]++;
        }

        return -1;
    }
};
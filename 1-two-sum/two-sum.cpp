class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int m=target-nums[i];
            if(mp.find(m) != mp.end()){
                return {{mp[m],i}};
            }
            mp[nums[i]]=i;
        }

        return {};
    }
};
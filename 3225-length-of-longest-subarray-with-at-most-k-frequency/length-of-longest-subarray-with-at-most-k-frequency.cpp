class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int mx=0;
        int n=nums.size(),i=0,j=0;

        while(i<n && j<n){
            mp[nums[j]]++;
            while(mp[nums[j]]>k){
                mp[nums[i]]--;
                i++;
            }

            int count=j-i+1;

            mx=max(count,mx);
            j++;
        }

        return mx;
    }
};
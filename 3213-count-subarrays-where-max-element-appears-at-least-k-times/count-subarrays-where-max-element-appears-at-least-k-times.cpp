class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n=nums.size();
        int max=*max_element(nums.begin(), nums.end());
        long long count=0;
        
        int j=0;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            while(mp[max]>=k){
                count+=n-i;
                mp[nums[j]]--;
                j++;
            }
        }

        return count;
    }
};
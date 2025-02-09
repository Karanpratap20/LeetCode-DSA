class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n = nums.size();
        long long total_pairs = 1LL * n * (n - 1) / 2; 

        unordered_map<int, long long> mp;
        long long good_pairs = 0;

        for (int i = 0; i < n; i++) {
            good_pairs += mp[nums[i] - i]; 
            mp[nums[i] - i]++;
        } 

        return total_pairs - good_pairs;
    }
};
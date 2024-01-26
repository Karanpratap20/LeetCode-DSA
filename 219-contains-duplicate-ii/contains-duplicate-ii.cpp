class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for (int j = 0; j < n; ++j) {
            if (j > k) {
                mp[nums[j - k - 1]]--;
                if (mp[nums[j - k - 1]] == 0) {
                    mp.erase(nums[j - k - 1]);
                }
            }

            if (mp.find(nums[j]) != mp.end()) {
                return true; 
            }

            mp[nums[j]]++;
        }

        return false;
    }
};
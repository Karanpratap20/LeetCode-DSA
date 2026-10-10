class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        long long k = 1LL * k1 + k2;

        int max_diff = 0;

        for (int i = 0; i < n; i++) {
            max_diff = max(max_diff, abs(nums2[i] - nums1[i]));
        }

        vector<long long> mp(max_diff + 1, 0);

        for (int i = 0; i < n; i++) {
            int x = abs(nums2[i] - nums1[i]);
            mp[x]++;
        }

        int max_diff1 = max_diff;

        while (k > 0 && max_diff > 0) {
            long long x = mp[max_diff];

            if (x == 0) {
                max_diff--;
                continue;
            }

            long long operations = min(k, x);

            mp[max_diff] -= operations;
            mp[max_diff - 1] += operations;

            k -= operations;
            max_diff--;
        }

        long long sum = 0;

        for (int i = 0; i <= max_diff1; i++) {
            sum += 1LL * i * i * mp[i];
        }

        return sum;
    }
};
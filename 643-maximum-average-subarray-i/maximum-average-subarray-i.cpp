class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        long long i = 0, j = k - 1;
        long long mx = 0;
        long long sum = 0;

        for (long long x = 0; x < k; x++) {
            sum += nums[x];
        }

        mx = sum;

        while (j < n - 1) {
            sum -= nums[i];
            i++;
            j++;
            sum += nums[j];
            mx = max(mx, sum);
        }

        return (double)mx / k;
    }
};

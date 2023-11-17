class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int hash[100001] = {0};

        for (int num : nums) {
            hash[num]++;
            maxi = max(maxi, num);
            mini = min(mini, num);
        }

        int low = mini;
        int high = maxi;
        maxi = INT_MIN;
        while (low <= high) {
            if (hash[low] == 0) low++;
            else if (hash[high] == 0) high--;
            else {
                maxi = max(maxi, low + high);
                hash[low]--;
                hash[high]--;
            }
        }

        return maxi;
    }
};
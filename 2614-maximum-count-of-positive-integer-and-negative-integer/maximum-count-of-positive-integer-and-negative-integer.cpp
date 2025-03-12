class Solution {
public:
    int search(vector<int>& arr, int l, int r) {
        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (arr[mid] < 0 && (mid == r || arr[mid + 1] >= 0)) {
                return mid;
            } else if (arr[mid] < 0) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return -1;
    }

    int maximumCount(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;

        int x = search(nums, l, r);

        if (x == -1) {
            if (nums[0] > 0) return nums.size(); 
            if (nums[r] < 0) return nums.size(); 
        }

        int zeroCount = 0;
        for (int i = x + 1; i < nums.size() && nums[i] == 0; ++i) {
            zeroCount++;
        }

        int negativeCount = x + 1;
        int positiveCount = nums.size() - negativeCount - zeroCount;

        return max(negativeCount, positiveCount);
    }
};

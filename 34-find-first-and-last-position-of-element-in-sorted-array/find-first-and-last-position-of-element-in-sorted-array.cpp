class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int left = findLeftmost(nums, target, 0, n - 1);
        
        if (left == -1) {
            return {-1,-1}; 
        }
        
        int right = findRightmost(nums, target, left, n - 1);
        return {left,right};
    }
    
private:
    int findLeftmost(vector<int>& nums, int target, int left, int right) {
        int index = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] >= target) {
                right = mid - 1;
                if (nums[mid] == target) {
                    index = mid;
                }
            } else {
                left = mid + 1;
            }
        }
        
        return index;
    }
    
    int findRightmost(vector<int>& nums, int target, int left, int right) {
        int index = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] <= target) {
                left = mid + 1;
                if (nums[mid] == target) {
                    index = mid;
                }
            } else {
                right = mid - 1;
            }
        }
        
        return index;
    }
};

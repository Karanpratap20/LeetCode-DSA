public class Solution {
    public int MaxSubArray(int[] nums) {
        int maxEnd=nums[0];
        int res=nums[0];

        for(int i=1;i<nums.Length;i++){
            maxEnd=Math.Max(nums[i], maxEnd+nums[i]);

            res=Math.Max(res,maxEnd);
        }
        return res;
    }
}
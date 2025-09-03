public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int,int> mp= new Dictionary<int,int>();
        int n=nums.Length;

        for(int i=0;i<n;i++){
            int m=target - nums[i];
            if(mp.ContainsKey(m)){
                return new int[] {mp[m],i};
            }
            mp[nums[i]]=i;
        }

        return new int[0];
    }
}
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp={}
        n=len(nums)
        for i in range(0,n):
            x=target-nums[i]
            val=mp.get(x, None)
            if val is not None:
                return {mp[x],i}
            mp[nums[i]]=i

        return {}
        
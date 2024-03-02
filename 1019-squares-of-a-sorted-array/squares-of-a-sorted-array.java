class Solution {
    public int[] sortedSquares(int[] nums) {
        int n=nums.length;

        int[] ans=new int[n];

        int i=0,j=n-1,k=n-1;

        while(i<=j){
            if(Math.abs(nums[i])<Math.abs(nums[j])){
                ans[k]=nums[j]*nums[j];
                j--;
                k--;
            }else{
                ans[k]=nums[i]*nums[i];
                i++;
                k--;
            }
        }

        return ans;
    }
}
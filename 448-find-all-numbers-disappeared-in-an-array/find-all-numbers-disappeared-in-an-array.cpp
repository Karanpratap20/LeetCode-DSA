class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int i=0,j=1;
        while(i<n){
            if(nums[i]==j){
                i++;
                j++;
            }
            else if(nums[i]<j){
                i++;
            }
            else{
                ans.push_back(j);
                j++;
            }
        }
        for (int k = j; k <= n; ++k) {
            ans.push_back(k);
        }
        return ans;
    }
};
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        
        unordered_map<int,int> mp;
        int sa=0;
        int sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1) sum++;
            else sum--;

            if(sum==0){
                if(sa < i+1) sa=i+1;
            }else if(mp.find(sum)!=mp.end()){
                if(sa < i-mp[sum]) sa = i-mp[sum];

            }else{
                mp[sum]=i;
            }
        }
        
        return sa;
    }
};
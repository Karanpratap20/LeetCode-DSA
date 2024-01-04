class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto& it:mp){
            int val=it.second;
            if(val==1) return -1;
            else if(val%3==0){
                count+=(val/3);
            }
            else{
                count+=(val/3)+1;
            }
        }
        return count;
    }
};
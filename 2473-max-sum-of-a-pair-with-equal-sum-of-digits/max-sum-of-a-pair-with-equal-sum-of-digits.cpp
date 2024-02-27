class Solution {
public:
    int sum(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;

        for(int& it:nums){
            int s=sum(it);

            mp[s].push_back(it);
        }

        int mx=0;
        for(auto& it:mp){
            int sm=0;
            int x=it.second.size();
            if(x>1){
                sort(it.second.begin(), it.second.end());
                sm=it.second[x-1]+it.second[x-2];
            }
            mx=max(mx,sm);
        }

        if(mx==0) return -1;
        return mx;
    }
};
class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n=arr.size();
        map<int,long long int> mp;
        sort(arr.begin(),arr.end());
        for(auto i: arr){
            mp[i]=1;
        }
        for(int i=1;i<n;i++){
            long long int count=0;
            for(int j=0;j<i;j++){
                if(arr[i]%arr[j]==0){
                    int complement = arr[i] / arr[j];
                    if (mp.find(complement) != mp.end()) {
                        count += (mp[arr[j]] * mp[complement])% 1000000007;
                    }
                }
            }
            mp[arr[i]]= (count+1)% 1000000007;
        }
        long long int ans = 0;
        for (auto it : mp) {
            ans = (ans + it.second) % 1000000007;
        }
        return static_cast<int>(ans);
    }
};
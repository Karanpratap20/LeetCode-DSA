#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    int numberOfWays(string& corridor) {
        const long long mod=1e9+7;
        int n=corridor.size(), count=0;
        if (n==1) return 0;
        vector<vector<int>> seat(2);
    
        for(int i=0; i<n; i++){
            if (corridor[i]=='S'){
                seat[count&1].push_back(i);
                count++;
            }     
        }
        if (count&1 || count==0) return 0;
        long long ans=1;
        int sz=count/2;
        
        for(int i=1; i<sz; i++){
            ans=(ans*(seat[0][i]-seat[1][i-1])%mod);
        }
        
        return ans;
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
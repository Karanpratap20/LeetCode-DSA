class Solution {
public:
    const int MOD = 1000000007;

    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        int cpy=n;
        vector<long long> power;

        int x=0;

        while(cpy){
            if(cpy & 1){
                long long val= (1LL << x) % MOD;
                power.push_back(val);
            }
            cpy>>=1;
            x++;
        }

        vector<int> ans;
        for(auto it:queries){
            long long pro=1;
            for(int i=it[0];i<=it[1];i++){
                pro=(pro*power[i]) % MOD;
            }
            ans.push_back((int)pro);
        }

        return ans;
    }
};
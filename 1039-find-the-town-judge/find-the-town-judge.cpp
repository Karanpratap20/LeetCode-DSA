class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int m=trust.size();
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;

        for(auto& it:trust){
            mp1[it[0]]++;
            mp2[it[1]]++;
        }

        for(int i=1;i<=n;i++){
            if(mp1[i]==0 && mp2[i]==n-1){
                return i;
            }
        }

        return -1;
    }
};
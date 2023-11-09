class Solution {
public:
    int countHomogenous(string s) {
        const int MOD=1000000007;
        int ans=s.size();
        int cnt=1;
        int i=0,j=1;
        while(j<s.size()){
            if(s[i]==s[j]){
                ans=(ans+cnt)%MOD;
                cnt++;
            }else{
                cnt=1;
            }
            i++;
            j++;
        }
        return ans;
    }
};
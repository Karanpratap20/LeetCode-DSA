class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int p) {
        int n=t.size();

        sort(t.begin(),t.end());

        int i=0,j=n-1;
        int ans=0,mx=0;

        while(i<=j){
            if(t[i]<=p){
                p-=t[i++];
                ans++;
            }else{
                p+=t[j--];
                ans--;
            }
            if(ans<0) break;
            mx=max(mx,ans);
        }

        return mx;
    }
};
class Solution {
    public int bagOfTokensScore(int[] t, int p) {
        int n=t.length;

        Arrays.sort(t);

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

            mx=Math.max(mx,ans);
        }

        return mx;
    }
}
class Solution {
public:
    int numberOfMatches(int n) {
        int ans=0;
        int m;
        while(n>=2){
            if(n%2!=0){
                m=(n-1)/2;
                n=((n-1)/2)+1;
            }
            else{
                m=n/2;
                n=n/2;
            }
            ans+=m;
        }
        return ans;
    }
};
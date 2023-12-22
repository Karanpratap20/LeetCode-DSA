class Solution {
public:
    int one(string s,int i,int j){
        int count=0;
        for(int k=i;k<j;k++){
            if(s[k]=='1'){
                count++;
            }
        }
        return count;
    }
    int zero(string s,int i,int j){
        int count=0;
        for(int k=i;k<j;k++){
            if(s[k]=='0'){
                count++;
            }
        }
        return count;
    }
    int maxScore(string s) {
        int n=s.length();
        int mx=0;
        for(int i=1;i<n;i++){
            int sum=zero(s,0,i)+one(s,i,n);
            mx=max(sum,mx);
        }
        return mx;
    }
};
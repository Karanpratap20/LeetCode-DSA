class Solution {
public:
    string removeStars(string s) {
        string ans="";
        int n=s.size();
        int count=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='*') count++;
            else if(count==0) ans+=s[i];
            else{
                count--;
            } 
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};
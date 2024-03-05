class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();

        int i=0,j=n-1;

        while(i<j){
            if(s[i]!=s[j]){
                break;
            }
            int c=s[i];

            while(i<j && s[i]==c) i++;
            
            while(i<=j && s[j]==c) j--;
        }

        return j-i+1;
    }
};
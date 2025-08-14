class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
        int x=-1;

        for(int i=0;i<n-2;i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                x=i;
                break;
            }
        }
        for(int i=x+3;i<n-2;i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                if(num[x]<num[i]) x=i;
            }
        }

        string ans="";

        if(x==-1) return ans;
        for(int i=x;i<x+3;i++){
            ans+=num[i];
        }

        return ans;
    }
};
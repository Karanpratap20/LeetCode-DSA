class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
        string ans="";

        for(int i=0;i<n-2;i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                string triplet = num.substr(i, 3);
                if(triplet>ans) ans=triplet;
                i+=2;
            }
        }

        return ans;
    }
};
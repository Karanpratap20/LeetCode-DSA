class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int m=s.size();
        int n=spaces.size();

        string res="";
        int a=0,b=0;
        while(a<m){
            if(b<n && a==spaces[b]){
                res+=' ';
                b++;
            }else{
                res+=s[a];
                a++;
            }
        }

        return res;
    }
};
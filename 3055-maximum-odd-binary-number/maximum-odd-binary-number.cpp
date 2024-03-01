class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0;
        for(char& it:s){
            if(it=='1')count++;
        }
        count--;

        int n=s.size();
        for(int i=0;i<n;i++){
            if(i==n-1 || count!=0){
                s[i]='1';
                count--;
            }
            else{
                s[i]='0';
            }
        }

        return s;
    }
};
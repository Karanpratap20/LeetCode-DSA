class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=k-1;
        int count=0;
        bool first=false;
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            first=true;
        }
        for(int k=0;k<=j;k++){
            if(s[k]=='a' || s[k]=='e' || s[k]=='i' || s[k]=='o' || s[k]=='u'){
                count++;
            }
        }
        i++;
        j++;
        int mx=count;
        while(j<s.size()){
            if(first==true){
                count--;
            }
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                count++;
            }
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                first=true;
            }else{
                first=false;
            }
            i++;
            j++;
            mx=max(count,mx);
        }

        return mx;
    }
};
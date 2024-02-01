class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        int n=s.size();
        for(int i=0;i<n;i++){
            auto it1=mp1.find(s[i]);
            auto it2=mp2.find(t[i]);

            if(it1!=mp1.end()){
                if(it1->second!=t[i]){
                    return false;
                }
            }
            if(it2!=mp2.end()){
                if(it2->second!=s[i]){
                    return false;
                }
            }
            mp1[s[i]]=t[i];
            mp2[t[i]]=s[i];
            
        }
        return true;
    }
};
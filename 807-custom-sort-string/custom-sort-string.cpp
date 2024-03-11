class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        unordered_map<char,int> mp1;

        for(char& it:s){
            mp[it]++;
        }
        for(char& it:order){
            mp1[it]++;
        }
        string ans="";

        for(char& it:order){
            if(mp.find(it)!=mp.end()){
                while(mp[it]--){
                    ans+=it;
                }
            }
        }

        for(char& it:s){
            if(mp1.find(it)!=mp1.end()){
                continue;
            }else{
                ans+=it;
            }
        }

        return ans;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;

        for(char& it:s){
            mp[it]++;
        }
        for(char& it:t){
            mp[it]--;
        }

        for(auto& it: mp){
            if(it.second!=0) return false;
        }

        return true;
    }
};
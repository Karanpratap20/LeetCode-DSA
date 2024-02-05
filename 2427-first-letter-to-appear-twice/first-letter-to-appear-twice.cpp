class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> mp;

        for(char& it:s){
            if(mp.find(it)!=mp.end()){
                return it;
            }
            else{
                mp[it]++;
            }
        }
        return ' ';
    }
};
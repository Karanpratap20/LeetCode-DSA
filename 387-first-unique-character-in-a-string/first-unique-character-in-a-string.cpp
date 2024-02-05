class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;

        for(char& it:s){
            mp[it]++;
        }
        
        int count=0;
        for(char& it:s){
            if(mp.find(it)!=mp.end()){
                if(mp[it]==1){
                    return count;
                }
            }
            count++;
        }
        return -1;
    }
};
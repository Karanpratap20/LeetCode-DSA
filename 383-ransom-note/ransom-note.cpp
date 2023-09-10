class Solution {
public:
    bool canConstruct(string r, string m) {
        map<char,int> mp;
        for (char c : m) {
            mp[c]++;
        }
        for (char c : r) {
            if (mp.find(c) != mp.end() && mp[c] > 0) {
                mp[c]--;
            } else {
                return false;
            }
        }
        return true;
    }
};
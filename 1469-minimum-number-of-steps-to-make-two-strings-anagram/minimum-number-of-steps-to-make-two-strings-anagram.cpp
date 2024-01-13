class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for(char& it: s){
            mp1[it]++;
        }
        for(char& it: t){
            mp2[it]++;
        }
        int count=0;
        for(char c = 'a'; c <= 'z'; c++){
            count += abs(mp1[c] - mp2[c]);
        }
        return count/2;
    }
};
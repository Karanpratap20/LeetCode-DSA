class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a,b;
        for(const string& s : word1) a+=s;
        for(const string& s : word2) b+=s;

        return a==b;
    }
};
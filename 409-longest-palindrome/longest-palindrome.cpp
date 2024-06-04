class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;

        for(char it:s){
            mp[it]++;
        }
        int ans=1;
        for(auto it:mp){
            int x=it.second;
            if(x>1){
                ans+=x-(x%2);
            }
        }
        if(s.size()>ans){
            return ans;
        }

        return s.size();
    }
};
class Solution {
public:
    vector<vector<string>> res;
    vector<string> path;
    vector<vector<int>> dp; // DP table for memoization

    bool isPalindrome(string &s, int start, int end) {
        while (start <= end) {
            if (s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }

    void func(int ind, string &s) {
        if (ind == s.size()) {
            res.push_back(path);
            return;
        }

        for (int i = ind; i < s.size(); i++) {
            if (dp[ind][i] == -1) {
                dp[ind][i] = isPalindrome(s, ind, i) ? 1 : 0;
            }
            if (dp[ind][i] == 1) {
                path.push_back(s.substr(ind, i - ind + 1));
                func(i + 1, s);
                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        int n = s.size();
        dp.assign(n, vector<int>(n, -1)); // Initialize DP table with -1
        func(0, s);
        return res;
    }
};

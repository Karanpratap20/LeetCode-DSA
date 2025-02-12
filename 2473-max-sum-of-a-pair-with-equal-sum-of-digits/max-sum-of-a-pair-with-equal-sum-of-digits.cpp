class Solution {
public:
    int sum(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,pair<int,int>> mp;

        for (int& it : nums) {
            int s = sum(it);

            // Extract current max pair for this sum value
            auto& p = mp[s];

            if (it > p.first) {
                p.second = p.first; 
                p.first = it;       
            } else if (it > p.second) {
                p.second = it;      
            }
        }

        int mx = -1;

        for (auto& it : mp) {
            if (it.second.second > 0) { 
                mx = max(mx, it.second.first + it.second.second);
            }
        }

        return mx;
    }
};
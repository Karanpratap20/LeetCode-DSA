class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro=0;
        int minp=INT_MAX;
        int n=prices.size();
        for(int i=0;i<n;i++){
            minp=min(minp,prices[i]);
            pro=max(pro,prices[i]-minp);
        }
        return pro;
    }
};
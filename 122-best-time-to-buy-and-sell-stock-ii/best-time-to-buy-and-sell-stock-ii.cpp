class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0,min=prices[0];
        for(int i=1;i<n;i++){
            if(prices[i]<min) min=prices[i];
            else if(prices[i]-min>0){
                profit+=prices[i]-min;
                min=prices[i];
            }
        }
        return profit;
    }
};
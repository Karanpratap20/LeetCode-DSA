class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int sum=0;
        for(int i=0;i<tickets.size();i++){
            sum+=min(tickets[i],tickets[k]);
            if(i>k){
                if(tickets[i]>=tickets[k]){
                    sum--;
                }
            }
        }

        return sum;
    }
};
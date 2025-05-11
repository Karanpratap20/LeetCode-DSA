class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int c=0;

        for(int it:arr){
            if(c==3) return true;
            if(it%2==1) c++;
            else c=0;
        }

        if(c==3) return true;
        return false;
    }
};
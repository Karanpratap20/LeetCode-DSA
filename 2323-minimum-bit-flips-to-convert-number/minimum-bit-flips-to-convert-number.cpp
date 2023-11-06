class Solution {
public:
    int minBitFlips(int start, int goal) {
        long long count=0;
        while(max(start,goal)){
            if((start & 1)!= (goal & 1)){
                count++;
            }
            start = start >> 1;
            goal = goal >> 1;
        }
        return count;
    }
};
class Solution {
public:
    bool hasAlternatingBits(int n) {
        int x = (n & 1);
        n = n >> 1;
        while(n){
            if((n & 1)==x) return false;
            else{
                x = n & 1;
                n = n >> 1;
            }
        }
        return true;
    }
};
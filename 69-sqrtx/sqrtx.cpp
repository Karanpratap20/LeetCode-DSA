class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        long long y=1;
        for(long long i=1;i<x;i++){
            if(i*i > x){
                y= i-1;
                break;
            }
        }
        return y;
    }
};
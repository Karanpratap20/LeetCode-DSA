class Solution {
public:
    bool isPowerOfThree(int n) {
        return (n>0) && ((n^(n-1))==1) && (1162261467%n==0);
    }
};
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xr=0;
        for(int it:nums){
            xr^=it;
        }
        int count=0;
        int mx=max(k,xr);
        int mi=min(k,xr);
        while (xr != k) {
            int a = k & 1;
            int b = xr & 1;

            if (a != b) count++;

            k >>= 1;
            xr >>= 1;
        }

        return count;
    }
};
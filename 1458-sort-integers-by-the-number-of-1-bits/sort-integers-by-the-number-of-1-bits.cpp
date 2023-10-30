class Solution {
public:
    static int countbits(int n){
        int count=0;
        while(n){
            if((n & 1)==1){
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
    static bool comp(int a,int b){
        int ca = countbits(a);
        int cb = countbits(b);

        if(ca==cb){
            return a<b;
        }
        return ca<cb;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),comp);
        return arr;
    }
};
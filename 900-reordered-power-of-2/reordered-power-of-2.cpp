class Solution {
public:
    vector<int> freq(int n){
        vector<int> count(10,0);

        while(n){
            count[n%10]++;
            n/=10;
        }

        return count;
    }
    bool reorderedPowerOf2(int n) {
        vector<int> ans=freq(n);

        for(int i=0;i<31;i++){
            int k=1<<i;

            if(freq(k)==ans) return true;
        }

        return false;
    }
};
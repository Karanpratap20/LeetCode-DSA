class Solution {
public:
    int fun(int n){
        int num=0;
        while(n){
            int temp=n%10;
            num+=temp*temp;
            n/=10;
        }
        return num;
    }
    bool isHappy(int n) {
        unordered_map<int,int> mp;
        mp[n]++;

        while(n!=100 && n!=10 && n!=1){
            n=fun(n);
            if(mp.find(n)!=mp.end()){
                return false;
            }
            else{
                mp[n]++;
            }
        }
        return true;
    }
};
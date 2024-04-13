class Solution {
public:
    int sum(int n){
        int s=0;
        while(n){
            s+=n%10;
            n/=10;
        }

        return s;
    }
    int countLargestGroup(int n) {
        unordered_map<int,int> mp;

        for(int i=1;i<=n;i++){
            mp[sum(i)]++;
        }

        int mx=0;
        for(auto& it:mp){
            mx=max(mx,it.second);
        }

        int count=0;
        for(auto& it:mp){
            if(it.second==mx) count++;
        }

        return count;
    }
};
class Solution {
public:
    bool reorderedPowerOf2(int n) {
        if(n==1) return true;
        vector<int> hash;

        while(n){
            hash.push_back(n%10);
            n/=10;
        }

        sort(hash.begin(),hash.end());

        int ans=2;
        for(int i=0;i<31;i++){
            vector<int> arr;
            int copy=ans;
            while(copy){
                arr.push_back(copy%10);
                copy/=10;
            }

            sort(arr.begin(),arr.end());

            if(arr==hash) return true;

            ans<<=1;
            arr.clear();
        }
        return false;
    }
};
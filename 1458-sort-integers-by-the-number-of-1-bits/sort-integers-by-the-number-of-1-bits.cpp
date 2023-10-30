class Solution {
public:
    int countbits(int n){
        int count=0;
        while(n){
            if((n & 1)==1){
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> v;
        for(int i=0;i<arr.size();i++){
            int x=countbits(arr[i]);
            v.push_back({x,arr[i]});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<arr.size();i++){
            arr[i] = v[i].second;
        }
        return arr;
    }
};
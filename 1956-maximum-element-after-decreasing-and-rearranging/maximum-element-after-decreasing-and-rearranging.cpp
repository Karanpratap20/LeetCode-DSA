class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int ans=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>ans){
                ans+=1;
            }
        }
        return ans;
    }
};
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int k) {
        int n=arr.size();
        int m=arr[0].size();
        int l=0,r=(n*m)-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            int x=mid/m,y=mid%m;
            if(arr[x][y]==k){
                return true;
            }
            else if(arr[x][y]<k){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return false;
    }
};
class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n=arr.size();
        int m1=min(arr[0],arr[1]),m2=max(arr[0],arr[1]);
        for(int i=2;i<n;i++){
            if(arr[i]>m2){
                m1=m2;
                m2=arr[i];
            }
            else if(arr[i]>m1){
                m1=arr[i];
            }
        }
        return (m1-1)*(m2-1);
    }
};
class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n=arr.size();
        int j=0;
        for(int i=1;i<n;i++){
            if(arr[j]!=arr[i]){
                j++;
                arr[j]=arr[i];
            }
        }
        return j+1;
    }
};
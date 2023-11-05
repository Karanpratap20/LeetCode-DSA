class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if(k==1) return max(arr[0],arr[1]);

        if(k>=arr.size()){
            return *max_element(arr.begin(),arr.end());
        }

        int x=arr[0];
        int c=0;

        for(int i=1;i<arr.size();i++){
            if(x > arr[i]){
                c++;
            }
            else{
                x=arr[i];
                c=1;
            }
            if(c==k) return x;
        }
        return x;
    }
};
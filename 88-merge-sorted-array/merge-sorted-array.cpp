class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        vector<int> v;
        int i=0;
        int j=0;
        while(i<m && j<n)
        {
            if(n1[i]<n2[j]){
                v.push_back(n1[i]);
                i++;
            }
            else{
                v.push_back(n2[j]);
                j++;
            }
        }
        while(i<m){
            v.push_back(n1[i]);
            i++;
        }
        while(j<n){
            v.push_back(n2[j]);
            j++;
        }
        n1=v;
    }
};
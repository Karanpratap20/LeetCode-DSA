class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v;
        for(int i=0;i<n;i++){
            vector<int> v1(i+1,1);
            for(int j=1;j<i;j++){
                v1[j]=v[i-1][j]+v[i-1][j-1];
            }
            v.push_back(v1);
        }
        return v;
    }
};
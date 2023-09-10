class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& I, vector<int>& NI) {
        int n=I.size();
        vector<vector<int>> v;
        int i=0;
        while (i < n && I[i][1] < NI[0]) {
            v.push_back(I[i]);
            i++;
        }
        while (i < n && I[i][0] <= NI[1]) {
            NI[0] = min(NI[0], I[i][0]);
            NI[1] = max(NI[1], I[i][1]);
            i++;
        }
        v.push_back(NI);
        while (i < n) {
            v.push_back(I[i]);
            i++;
        }
        return v;
    }
};
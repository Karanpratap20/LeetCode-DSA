class Solution {
public:
    int find(vector<int>& dsuf,int v){
        if(dsuf[v]==-1) return v;

        return dsuf[v] = find(dsuf,dsuf[v]);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();

        vector<int> dsuf(n+1,-1);

        for(int i=0;i<n;i++){
            int px=find(dsuf,edges[i][0]);
            int py=find(dsuf,edges[i][1]);

            if(px==py) return edges[i];

            dsuf[px]=py;
        }

        return {0,0};
    }
};
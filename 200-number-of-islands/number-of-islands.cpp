class Solution {
public:
    vector<pair<int,int>> directions={{-1,0},{0,-1},{0,1},{1,0}};

    void bfs(int i,int j,vector<vector<char>>& grid){
        int n=grid.size(),m=grid[0].size();

        queue<pair<int,int>> q;
        q.push({i,j});
        grid[i][j]='0';

        while(!q.empty()){
            auto [ni, nj]= q.front();
            q.pop();

            for(auto [a, b]:directions){
                int di=ni+a,dj=nj+b;

                if(di>=0 && di<n && dj>=0 && dj<m && grid[di][dj]=='1'){
                    q.push({di,dj});
                    grid[di][dj]='0';
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int count=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    bfs(i,j,grid);
                    count++;
                }
            }
        }

        return count;
    }
};
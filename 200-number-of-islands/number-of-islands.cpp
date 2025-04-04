class Solution {
public:
    vector<pair<int,int>> directions={{1,0},{-1,0},{0,1},{0,-1}};

    void bfs(vector<vector<char>>& grid,int i,int j){
        int n=grid.size(),m=grid[0].size();
        queue<pair<int,int>> q;
        q.push({i,j});
        grid[i][j]='0';

        while(!q.empty()){
            auto [ci, cj]=q.front();
            q.pop();
            for(auto [a, b]:directions){
                int di=ci+a;
                int dj=cj+b;

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
                    bfs(grid,i,j);
                    count++;
                }
            }
        }

        return count;
    }
};
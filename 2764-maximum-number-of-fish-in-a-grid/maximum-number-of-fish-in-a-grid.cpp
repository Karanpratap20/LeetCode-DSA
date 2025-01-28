class Solution {
public:
    vector<pair<int,int>> directions={{-1,0},{1,0},{0,-1},{0,1}};

    int bfs(vector<vector<int>>& grid,vector<vector<bool>>& visited,int i,int j){
        int rows=grid.size();
        int cols=grid[0].size();
        int sum=0;

        queue<pair<int,int>> q;
        q.push({i,j});
        visited[i][j]=true;

        
        
        while(!q.empty()){
            auto [i, j] = q.front();
            q.pop();

            sum+=grid[i][j];
            for(auto [di, dj]:directions){
                int ni =i+di;
                int nj =j+dj;

                if(ni>=0 && ni<rows && nj>=0 && nj<cols && !visited[ni][nj] && grid[ni][nj]>0){
                    q.push({ni,nj});
                    visited[ni][nj]=true;
                }
            }
        }
        return sum;
    }

    int findMaxFish(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();

        vector<vector<bool>> visited(rows,vector<bool>(cols,false));

        int mx=0;

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]!=0 && !visited[i][j]){
                    int x=bfs(grid,visited,i,j);
                    mx=max(mx,x);
                }
            }
        }

        return mx;
    }
};
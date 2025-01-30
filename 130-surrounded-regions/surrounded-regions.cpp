class Solution {
public:
    vector<pair<int,int>> directions={{-1,0},{0,-1},{1,0},{0,1}};

    void bfs(vector<vector<char>>& board,vector<vector<bool>>& visited,int i,int j){
        int n=board.size(),m=board[0].size();

        queue<pair<int,int>> q;
        q.push({i,j});
        visited[i][j]=true;

        while(!q.empty()){
            auto [ni, nj]=q.front();
            q.pop();

            for(auto [a, b]:directions){
                int di=ni+a;
                int dj=nj+b;

                if(di>=0 && di<n && dj>=0 && dj<m && !visited[di][dj] && board[di][dj]=='O'){
                    q.push({di,dj});
                    visited[di][dj]=true;
                }
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        int n=board.size(),m=board[0].size();

        vector<vector<bool>> visited(n,vector<bool>(m,false));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 || j==0 || i==n-1 || j==m-1) && board[i][j]=='O'){
                    bfs(board,visited,i,j);
                } 
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O' && !visited[i][j]){
                    board[i][j]='X';
                }
            }
        }
    }
};
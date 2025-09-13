public class Solution {
    List<(int,int)> directions = new List<(int,int)> {(-1,0),(1,0),(0,-1),(0,1)};

    void bfs(char[][] grid,int i,int j,int m,int n){
        Queue<(int,int)> q = new Queue<(int,int)>();
        q.Enqueue((i,j));
        grid[i][j]='0';

        while(q.Count>0){
            var (ci,cj) = q.Dequeue();

            foreach (var (di,dj) in directions){
                int ni=ci+di;
                int nj=cj+dj;

                if(ni>=0 && ni<m && nj>=0 && nj<n && grid[ni][nj]=='1'){
                    q.Enqueue((ni,nj));
                    grid[ni][nj]='0';
                }
            }
        }
    } 
    public int NumIslands(char[][] grid) {
        int m=grid.Length;
        int n=grid[0].Length;
        int count=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    bfs(grid,i,j,m,n);
                    count++;
                }
            }
        }

        return count;
    }
}
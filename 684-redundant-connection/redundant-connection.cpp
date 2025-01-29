class Solution {
public:
    bool bfs(int n,vector<unordered_set<int>>& adj,int start){
        vector<bool> visited(n+1);
        int count=0;
        queue<int> q;
        q.push(start);
        visited[start]=true;
        count++;

        while(!q.empty()){
            int curr=q.front();
            q.pop();

            for(auto it: adj[curr]){
                if(!visited[it]){
                    q.push(it);
                    count++;
                    visited[it]=true;
                }
            }
        }

        return count==n;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();

        vector<unordered_set<int>> adj(n+1);

        for(auto it:edges){
            adj[it[0]].insert(it[1]);
            adj[it[1]].insert(it[0]);
        }

        for(int i=n-1;i>=0;i--){
            int u=edges[i][0];
            int v=edges[i][1];

            adj[v].erase(u);
            adj[u].erase(v);

            if(bfs(n,adj,1)){
                return {u,v};
            }

            adj[u].insert(v);
            adj[v].insert(u);
        }
        
        return {0,0};
    }
};
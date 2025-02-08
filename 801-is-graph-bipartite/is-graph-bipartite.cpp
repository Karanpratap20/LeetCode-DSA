class Solution {
public:
    bool bfs(vector<vector<int>>& graph,vector<int>& color,int start){
        color[start]=0;

        queue<int> q;
        q.push(start);

        while(!q.empty()){
            int curr=q.front();
            int clr=color[curr];
            q.pop();

            for(auto it:graph[curr]){
                if(color[it]==-1){
                    q.push(it);
                    if(clr==1) color[it]=0;
                    else color[it]=1;
                }
                else{
                    if(clr==color[it]) return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> color(n,-1);

        for(int i=0;i<n;i++){
            if(color[i]==-1){
                if(!bfs(graph,color,i)) return false;
            }
        }

        return true;
    }
};
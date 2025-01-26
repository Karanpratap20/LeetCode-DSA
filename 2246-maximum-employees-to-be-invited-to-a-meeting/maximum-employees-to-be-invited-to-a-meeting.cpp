class Solution {
    int kahnsTopologicalSort(vector<int>& adj,vector<int>& indegree,vector<bool> & visited,int source){
        queue<int>q;
        q.push(source);

        int ln;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            visited[curr]=true;
            ln=curr;

            int nbr=adj[curr];
            indegree[nbr]--;
            if(indegree[nbr]==0 && !visited[nbr]){
                q.push(nbr);
            }
        }
        return adj[ln];
    }

    int maxtail(vector<vector<int>>& adj,vector<bool>& org_visited,int n,int source,int avoid){
        vector<bool> visited(n,false);
        queue<int> q;
        q.push(source);
        visited[source]=true;
        visited[avoid]=true;

        int level=0;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                int curr=q.front();
                q.pop();
                org_visited[curr]=true;

                for(int nbr:adj[curr]){
                    if(!visited[nbr]){
                        visited[nbr]=true;
                        q.push(nbr);
                    }
                }
            }
            level++;
        }
        return level;
    }

    int bfs(vector<int>& adj,vector<bool>& visited,int source){
        queue<int> q;
        q.push(source);
        visited[source]=true;

        int count=0;
        while(!q.empty()){
            int curr=q.front();

            q.pop();
            if(!visited[adj[curr]]){
                visited[adj[curr]]=true;
                q.push(adj[curr]);
            }
            count++;
        }
        return count;
    }
public:
    int maximumInvitations(vector<int>& adj) {
        int n=adj.size();
        vector<vector<int>> reverse_adj(n);
        vector<int> indegree(n);

        for(int i=0;i<n;i++){
            reverse_adj[adj[i]].push_back(i);
            indegree[adj[i]]++;
        }

        int total_tl=0;
        vector<bool> visited(n,false);

        for(int i=0;i<n;i++){
            if(indegree[i]==0 && !visited[i]){
                int node=kahnsTopologicalSort(adj,indegree,visited,i);
                if(adj[adj[node]]==node){
                    int tl=maxtail(reverse_adj,visited,n,node,adj[node])-1;
                    total_tl+=tl;
                    visited[node]=false;
                }
            }
        }


        int tsc=0;
        int maxcs=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                int cyclesize=bfs(adj,visited,i);
                if(cyclesize==2){
                    tsc++;
                }else{
                    maxcs=max(maxcs,cyclesize);
                }
            }
        }

        int cycle2= 2*tsc+ total_tl;

        return max(cycle2,maxcs);
    }
};
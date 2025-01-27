class Solution {
    #define Max 10000
public:
    vector<bool> checkIfPrerequisite(int numCourse, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<vector<int>> dist(numCourse,vector<int>(numCourse,Max));

        for(int i=0;i<numCourse;i++) dist[i][i]=0;

        unordered_map<int,vector<int>>adj;

        for(auto edge:prerequisites){
            adj[edge[0]].push_back(edge[1]);
            dist[edge[0]][edge[1]]=1;
        }

        for(int k=0;k<numCourse;k++){
            for(int i=0;i<numCourse;i++){
                for(int j=0;j<numCourse;j++){
                    if(dist[i][j]> dist[i][k]+dist[k][j]){
                        dist[i][j]=dist[i][k]+dist[k][j];
                    }
                }
            }
        }

        vector<bool> ans;
        for(auto query:queries){
            if(dist[query[0]][query[1]]<Max) ans.push_back(true);
            else ans.push_back(false);
        }

        return ans;
    }
};
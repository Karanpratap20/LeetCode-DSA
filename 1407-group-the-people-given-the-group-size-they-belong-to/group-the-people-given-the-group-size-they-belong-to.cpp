class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int x=groupSizes.size();
        vector<vector<vector<int>>> res(x+1);

        for(int i=0;i<groupSizes.size();i++){
            int gs=groupSizes[i];

            int n=res[gs].size();
            if(res[gs].empty() || res[gs][n-1].size()==gs){
                vector<int> t{i};
                res[gs].push_back(t);
            }
            else{
                res[gs][n-1].push_back(i);
            }
        }
        vector<vector<int>> v;

        for(auto it:res){
            if(!it.empty()){
                for(auto y:it)
                    v.push_back(y);
            }
        }
        return v;
    }
};
class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n=dist.size();
        vector<int> time;
        for(int i=0;i<n;i++){
            time.push_back((dist[i]+speed[i]-1)/speed[i]);
        }
        sort(time.begin(),time.end());
        int count=0;
        for(int i=0;i<n;i++){
            if(time[i]>i) count++;
            else break;
        }
        return count;
    }
};
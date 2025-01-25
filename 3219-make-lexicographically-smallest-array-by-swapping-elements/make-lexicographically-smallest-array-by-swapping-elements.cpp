class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n=nums.size();
        vector<pair<int,int>> copy;
        for(int i=0;i<n;i++){
            copy.push_back({nums[i],i});
        }
        sort(copy.begin(),copy.end());

        int l=0,r=1;
        while(r<n){
            vector<int> pos={copy[l].second};
            while(r<n && abs(copy[r].first-copy[r-1].first)<=limit){
                pos.push_back(copy[r].second);
                r++;
            }

            sort(pos.begin(),pos.end());

            for(int i=0;i<r-l;i++){
                nums[pos[i]]=copy[l+i].first;
            }

            l=r;
            r++;

            pos.empty();
        }
        return nums;
    }
};
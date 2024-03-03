class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        
        for(int& it:nums1){
            mp1[it]++;
        }
        for(int& it:nums2){
            mp2[it]++;
        }

        int c1=0,c2=0;

        for(int& it:nums1){
            if(mp2.find(it)!=mp2.end()){
                c1++;
            }
        }
        for(int& it:nums2){
            if(mp1.find(it)!=mp1.end()){
                c2++;
            }
        }

        return {c1,c2};
    }
};
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int s1=0,s2=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            s1+=nums[i];
            s2+=i+1;
            mp[nums[i]]++;
        }
        int a;
        for(auto& it:mp){
            if(it.second==2){
                a=it.first;
                break;
            }
        }
        int b;
        if(s1<s2){
            b=a+(s2-s1);
        }
        else{
            b=a-(s1-s2);
        }
        return {a,b};
    }
};
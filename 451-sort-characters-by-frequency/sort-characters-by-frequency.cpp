class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;

        for(char& it:s){
            mp[it]++;
        }

        vector<pair<int,char>> v;

        for(auto& it:mp){
            v.push_back({it.second,it.first});
        }

        sort(v.begin(),v.end());

        int i=0,j=v.size()-1;

        while(i<s.size()){
            if(v[j].first!=0){
                v[j].first--;
                s[i]=v[j].second;
                i++;
            }
            else{
                j--;
            }
        } 

        return s;       
    }
};
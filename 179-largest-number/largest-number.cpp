class Solution {
public:
    static bool compare(string a,string b){
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> str;
        for(int it:nums){
            str.push_back(to_string(it));
        }

        sort(str.begin(),str.end(),compare);
        
        string ans="";

        for(string it:str){
            ans+=it;
        }

        if(ans[0]=='0') return "0";
        return ans;
    }
};
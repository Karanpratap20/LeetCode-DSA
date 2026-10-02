class Solution {
public:
        
    void res(vector<string>& ans,string s,int o,int c,int n){
        if(o==n && c==n){
            ans.push_back(s);
            return;
        }
        if(o<n){
            res(ans,s+'(',o+1,c,n);
        }
        if(c<o){
            res(ans,s+')',o,c+1,n);
        }
    }

    vector<string> generateParenthesis(int n) {    
        vector<string> ans;
        res(ans,"",0,0,n);

        return ans;
    }
};
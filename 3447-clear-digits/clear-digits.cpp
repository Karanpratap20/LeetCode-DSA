class Solution {
public:
    string clearDigits(string s) {
        string ans;

        for(char it:s){
            if(it>='0' && it<='9'){
                ans.pop_back();
            }else{
                ans.push_back(it);
            }
        }
        
        return ans;
    }
};
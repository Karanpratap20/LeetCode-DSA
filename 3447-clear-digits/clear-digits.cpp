class Solution {
public:
    string clearDigits(string s) {
        string ans;

        stack<char> st;

        for(char it:s){
            if(it>='0' && it<='9'){
                st.pop();
            }else{
                st.push(it);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};
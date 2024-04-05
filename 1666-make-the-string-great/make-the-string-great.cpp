class Solution {
public:
    string makeGood(string s) {
        stack<int> st;

        for(char it:s){
            if(!st.empty() && abs(it-st.top())==32){
                st.pop();
            }else{
                st.push(it);
            }
        }
        string ans;

        while(!st.empty()){
            ans = char(st.top()) + ans;
            st.pop();
        }

        return ans;
    }
};
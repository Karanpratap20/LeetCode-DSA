class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int count=0;
        int m=0;
        for(char it:s){
            if(it=='('){
                st.push('(');
                m=st.size();
                count=max(count,m);
            }
            else if(it==')'){
                st.pop();
            }
        }
        return count;
    }
};
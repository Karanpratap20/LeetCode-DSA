class Solution {
public:
    int ladderLength(string b, string e, vector<string>& w) {
        queue<pair<string,int>> q;

        q.push({b,1});

        unordered_set<string> st(w.begin(),w.end());
        st.erase(b);

        while(!q.empty()){
            auto it=q.front();
            string word=it.first;
            int l=it.second;
            q.pop();
            if(word==e){
                return l;
            }
            for(int i=0;i<word.size();i++){
                char org=word[i];
                for(char ch='a';ch<='z';ch++){
                    word[i]=ch;
                    if(st.find(word)!=st.end()){
                        q.push({word,l+1});
                        st.erase(word);
                    }
                }
                word[i]=org;
            }
        }
        return 0;
    } 
};
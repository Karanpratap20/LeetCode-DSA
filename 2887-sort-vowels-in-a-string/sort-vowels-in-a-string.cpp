class Solution {
public:
    string sortVowels(string s) {
        int n=s.size();
        vector<char> ch;
        for(char &it:s){
            if(it=='A' || it=='E' || it=='I' || it=='O' || it=='U' || it=='a' || it=='e' || it=='i' || it=='o' || it=='u'){
                ch.push_back(it);
                it='1';
            }
        }
        sort(ch.begin(),ch.end());
        int i=0;
        for(char &it:s){
            if(it=='1'){
                it=ch[i++];
            }
        }
        return s;
    }
};
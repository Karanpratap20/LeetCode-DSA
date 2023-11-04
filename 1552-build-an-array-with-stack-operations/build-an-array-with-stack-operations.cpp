class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> s;
        int i=0,j=1;
        while(i<target.size()){
            if(target[i]==j){
                s.push_back("Push");
                i++;
                j++;
            }
            else{
                s.push_back("Push");
                s.push_back("Pop");
                j++;
            }
        }  
        return s;      
    }
};
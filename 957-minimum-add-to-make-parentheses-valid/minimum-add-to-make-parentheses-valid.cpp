class Solution {
public:
    int minAddToMakeValid(string s) {
        int o=0,c=0;

        for(char x:s){
            if(x=='('){
                o++;
            }
            else{
                if(o>0){
                    o--;
                }
                else{
                    c++;
                }
            }
        }

        return c + o;
    }
};
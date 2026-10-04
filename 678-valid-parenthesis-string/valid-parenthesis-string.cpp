class Solution {
public:
    bool checkValidString(string s) {
        int o1=0,o2=0;
        for(char c:s){
            if(c=='('){
                o1++;
                o2++;
            }
            else if(c==')'){
                o1--;
                o2--;
            }
            else{
                o1--;
                o2++;
            }

            if(o1<0) o1=0;

            if(o2<0) return false;
        } 

        return o1==0;
    }
};
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f=0,t=0;
        for(int it:bills){
            if(it==5){
                f++;
            }else if(it==10){
                if(f==0) return false;
                f--;
                t++;
            }else{
                if(t>0 && f>0){
                    t--;
                    f--;
                }
                else if(f>2){
                    f-=3;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};
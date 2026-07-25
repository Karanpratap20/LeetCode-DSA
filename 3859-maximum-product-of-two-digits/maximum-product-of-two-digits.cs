public class Solution {
    public int MaxProduct(int n) {
        int m1=-1,m2=0;

        while(n>0){
            int x=n%10;
            if(x>m2){
                m1=m2;
                m2=x;
            }
            else if(x>m1){
                m1=x;
            }
            n=n/10;
        }

        return m1*m2;
    }
}
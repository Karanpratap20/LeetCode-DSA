public class Solution {
    bool check(int n){
        while(n>0){
            if(n%10==0) return false;
            n/=10;
        }
        return true;
    }
    public int[] GetNoZeroIntegers(int n) {
        for(int i=1;i<=n;i++){
            int a=i,b=n-i;
            if(check(a) && check(b)) return new int[] {a,b};
        }

        return new int[] {};
    }
}
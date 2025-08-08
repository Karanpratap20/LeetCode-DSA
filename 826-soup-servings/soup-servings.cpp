class Solution {
public:
    unordered_map<int,unordered_map<int,double>> dp;
    double prob(int an,int bn){
        if(an<=0 && bn<=0) return 0.5;
        if(an<=0 && bn>0) return 1;
        if(an>0 && bn<=0) return 0;
        if(dp[an][bn]) return dp[an][bn];

        double a=prob(an-4,bn-0);
        double b=prob(an-3,bn-1);
        double c=prob(an-2,bn-2);
        double d=prob(an-1,bn-3);

        double ans=(a+b+c+d)/4;

        return dp[an][bn]=ans;
    }
    double soupServings(int n) {
        if(n>4800) return 1;
        int unit=(n+24)/25;
        return prob(unit,unit);
    }
};
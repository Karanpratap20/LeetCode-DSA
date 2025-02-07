class Solution {
public:
    int solve(int col,vector<int>& left,vector<int>& upperD,vector<int>& lowerD,int n){
        if(col==n){
            return 1;
        }

        int ans=0;
        for(int row=0;row<n;row++){
            if(left[row]==0 && upperD[n-1+col-row]==0 && lowerD[col+row]==0){
                left[row]=1;
                upperD[n-1+col-row]=1;
                lowerD[col+row]=1;

                ans+=solve(col+1,left,upperD,lowerD,n);

                left[row]=0;
                upperD[n-1+col-row]=0;
                lowerD[col+row]=0;
            }
        }

        return ans;
    }
    int totalNQueens(int n) {
        vector<int> left(n,0),upperD(2*n-1,0),lowerD(2*n-1,0);
        
        return solve(0,left,upperD,lowerD,n);
    }
};
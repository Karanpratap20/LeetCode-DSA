class Solution {
private:
    bool isSafe(int row,int col,vector<string>& board,int n){
        int i=row,j=col;

        while(i>=0 && j>=0){
            if(board[i][j]=='Q') return false;
            i--;
            j--;
        }
        i=row,j=col;

        while(j>=0){
            if(board[i][j]=='Q') return false;
            j--;
        }
        i=row;
        j=col;

        while(i<n && j>=0){
            if(board[i][j]=='Q') return false;
            i++;
            j--;
        }

        return true;
    }
public:
    void solve(int col,vector<vector<string>>& ans,vector<string>& board,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board,n)){
                board[row][col]='Q';
                solve(col+1,ans,board,n);
                board[row][col]='.';
            }
        }
    }
    void solve1(int col,vector<vector<string>>& ans,vector<string>& board,vector<int>& left,vector<int>& upperD,vector<int>& lowerD,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(left[row]==0 && lowerD[row+col]==0 && upperD[n-1+col-row]==0){
                board[row][col]='Q';
                left[row]=1;
                lowerD[row+col]=1;
                upperD[n-1+col-row]=1;
                solve1(col+1,ans,board,left,upperD,lowerD,n);
                board[row][col]='.';
                left[row]=0;
                lowerD[row+col]=0;
                upperD[n-1+col-row]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');

        for(int i=0;i<n;i++){
            board[i]=s;
        }

        vector<int> left(n,0),lowerD(2*n-1,0), upperD(2*n-1,0);

        solve1(0,ans,board,left,upperD,lowerD,n);
        return ans;
    }
};
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int area=0;
        int max_dia=0;
        for(int i=0;i<dimensions.size();i++){
            int a=dimensions[i][0];
            int b=dimensions[i][1];

            int diag= a*a + b*b ;

            if(max_dia==diag) area=max(area,a*b);
            else if(max_dia<diag){
                max_dia=diag;
                area=a*b;
            }
        }

        return area;
    }
};
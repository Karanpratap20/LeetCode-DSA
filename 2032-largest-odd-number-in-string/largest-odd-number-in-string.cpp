class Solution {
public:
    string largestOddNumber(string num) {
        for(int i=num.length()-1;i>=0;i--){
            char it=num[i];
            if(it=='1' || it=='3' || it=='5' || it=='7' || it=='9'){
                return num;
            }
            else{
                num.pop_back();
            }
        }
        return "";
    }
};
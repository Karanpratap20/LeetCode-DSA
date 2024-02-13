class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans;
        for(int a=0;a<words.size();a++)
        {
            int i=0;
            int j=words[a].length()-1;
            bool y=true;
            while(i<=j)
            {
                if(words[a][i]==words[a][j])
                {
                    i++;
                    j--;               
                }
                else{
                    y=false;
                    i++;
                    j--;
                }
            }
            if(y)
            {
                ans=words[a];
                break;
            }
        }
        return ans;
    }
};
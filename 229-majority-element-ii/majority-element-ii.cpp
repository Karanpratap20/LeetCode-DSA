class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        int n=v.size();
        int el1=INT_MIN,el2=INT_MIN,ct1=0,ct2=0;

        for(int it:v){
            if(ct1==0 && it!=el2){
                el1=it;
                ct1=1;
            }
            else if(ct2==0 && it!=el1){
                el2=it;
                ct2=1;
            }
            else if(it==el1) ct1++;
            else if(it==el2) ct2++;
            else{
                ct1--;
                ct2--;
            }
        }

        vector<int> ans;

        ct1=0;
        ct2=0;
        for(int it:v){
            if(it==el1) ct1++;
            if(it==el2) ct2++;
        }

        if(ct1>n/3) ans.push_back(el1);
        if(ct2>n/3) ans.push_back(el2);

        return ans;
    }
};
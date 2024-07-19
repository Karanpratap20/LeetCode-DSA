class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a = INT_MAX;  
        int b = INT_MAX;  
        int c = INT_MIN;  

        for (int i = 0; i < 3; ++i) {
            int num = nums[i];
            if (num < a) {
                b = a;
                a = num;
            } else if (num < b) {
                b = num;
            }
            if (num > c) {
                c = num;
            }
        }
        int d=a,e=b,f=c;

        for(int i=3;i<nums.size();i++){
            if(nums[i]>c){
                a=b;
                b=c;
                c=nums[i];
            }
            else if(nums[i]>b){
                a=b;
                b=nums[i];
            }
            else if(nums[i]>a){
                a=nums[i];
            }
        }
        for(int i=3;i<nums.size();i++){
            if(nums[i]<d){
                f=e;
                e=d;
                d=nums[i];
            }
            else if(nums[i]<e){
                f=e;
                e=nums[i];
            }
            else if(nums[i]<f){
                f=nums[i];
            }
        }

        int x=a*b*c;
        int y=d*e*c;

        return max(x,y);
    }
};
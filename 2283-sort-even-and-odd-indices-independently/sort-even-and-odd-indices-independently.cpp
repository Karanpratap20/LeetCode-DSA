class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> v;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                v.push_back(nums[i]);
                count++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i%2!=0){
                v.push_back(nums[i]);
            }
        }
        auto mid=v.begin()+count;
        sort(v.begin(),mid);
        sort(mid,v.end(),greater<int>());

        int i=0,j=0;
        while(i<nums.size()){
            nums[i]=v[j];
            j++;
            i+=2;
        }
        i=1;
        while(i<nums.size()){
            nums[i]=v[j];
            j++;
            i+=2;
        }
        return nums;
    }
};
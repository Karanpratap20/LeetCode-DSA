class Solution {
public:
    string getPermutation(int n, int k){
        vector<int> nums;
        int fact = 1;

        for (int i = 1; i <= n; i++) {
            nums.push_back(i);
            if (i < n) fact *= i;
        }
        
        k--;  
        string res;

        while(!nums.empty()){
            int ind=k/fact;
            res+=to_string(nums[ind]);
            nums.erase(nums.begin()+ind);

            if(!nums.empty()){
                k%=fact;
                fact/=nums.size();
            }
        }
        return res;
    }
};
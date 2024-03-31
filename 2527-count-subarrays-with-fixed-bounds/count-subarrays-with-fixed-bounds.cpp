class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        if(minK>maxK)return 0;
        int n=size(nums),mn=nums[0],mx=nums[0],rmost=0;
        int mxc=0,mnc=0;
        long long ans=0;
        for(int l=0,r=0;r<n;r++){
             if(nums[r]<minK || nums[r]>maxK){
                mxc=0,mnc=0;
                while(r<n && (nums[r]<minK || nums[r]>maxK)){
                    r++;
                }
                l=r;
                if(r==n){
                    return ans;
                }
                    mn=mx=nums[r];
             }

             mx=max(mx,nums[r]);
             if(nums[r]==maxK)mxc++;

             mn=min(mn,nums[r]);
             if(nums[r]==minK)mnc++;
             
             if(mx==maxK && mn==minK){
           
                rmost=max(r,rmost);
                while(rmost+1<n && nums[rmost+1]>=minK && nums[rmost+1]<=maxK){
                    rmost++;
                }
                int cln=0;
                while(mxc && mnc &&l<n){
                    cln++;
                    if(nums[l]==mn)mnc--;
                    if(nums[l]==mx)mxc--;
                    l++;
                }
                
                ans+=cln*(rmost-r+1);
                //cout<<ans;
             }
        }
        return ans;
    }
};
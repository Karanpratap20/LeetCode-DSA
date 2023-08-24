//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int n){
        long long ans=0;
        while (n % 2 == 0) {
            ans = 2;
            n /= 2;
        }
        for (int i = 3; i*i <= n; i += 2) {
            while (n % i == 0) {
                ans = i;
                n = n / i;
            }
        }
        if (n > 2) {
            ans = n;
        }
        return ans;
        }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
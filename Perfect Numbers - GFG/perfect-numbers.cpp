//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        long long n=N;
        long long result = 0;
        for (long long i = 1; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                result += i;
                if (i != n / i ) { 
                    result += n / i;
                }
            }
        }
        if(N==result-N){
            return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends
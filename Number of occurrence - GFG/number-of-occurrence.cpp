//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int first(int arr[], int l, int r, int n, int x) {
        while (r >= l) {
            int mid = l + (r - l) / 2;
            if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x) {
                return mid;
            } else if (x <= arr[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return -1;
    }

	int last(int arr[], int l, int r, int n, int x) {
        while (r >= l) {
            int mid = l + (r - l) / 2;
            if ((mid == n - 1 || x < arr[mid + 1]) && arr[mid] == x) {
                return mid;
            } else if (x >= arr[mid]) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return -1;
    }

	int count(int arr[], int n, int x) {
        int f = first(arr, 0, n - 1, n, x);
        if (f == -1) {
            return 0;
        }
        int l = last(arr, 0, n - 1, n, x);
        return l - f + 1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
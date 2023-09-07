//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    
    public:
    //Function to get the maximum total value in the knapsack.
    static bool compare(Item a, Item b) {
        return (a.value * 1.0 / a.weight) > (b.value * 1.0 / b.weight);
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,compare);
        int i=0;
        double ans = 0.0; 

        for (int i = 0; i < n && W > 0; i++) {
            if (arr[i].weight <= W) {
                ans += arr[i].value;
                W -= arr[i].weight;
            }
            else {
                ans += (arr[i].value * 1.0 / arr[i].weight) * W;
                W = 0;
            }
        }

        return ans;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends
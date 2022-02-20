// { Driver Code Starts


#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int i=0,j=n-1,in=-1;
	    while(i<=j){
	        if(j<i)
	        {
	            in=-1;
	            break;
	        }
	        int mid=i+(j-i)/2;
	        if(arr[mid]==x)
	        {
	            in=mid;
	            break;
	        }
	        else if(arr[mid]<x)
	        i=mid+1;
	        else
	        j=mid-1;
	    }
	    //return in;
	    if(in==-1)
	    return 0;
	    int c=1;
	    int l=in-1;
	    while(l>=0 and arr[l]==x){
	    c+=1;l-=1;}
	    int r=in+1;
	    while(r<=n-1 and arr[r]==x){
	    c+=1;r+=1;}
	    return c;
	}
};

// { Driver Code Starts.

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
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        int i=0,j=arr.size()-1;
        vector<int>res(1,-1);
        if(arr.size()==0)
            return res;
        while(i<j){
            int mid=(i+j)/2;
            if(arr[mid]<x)
                i=mid+1;
            else
                j=mid;
        }
        if(arr[i]!=x)
            return res;
        else
            res[0]=i;
        j=arr.size()-1;
        while(i<j){
            int mid=(i+j)/2+1;
            if(arr[mid]>x)
                j=mid-1;
            else
                i=mid;
        }
        res.push_back(j);
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends
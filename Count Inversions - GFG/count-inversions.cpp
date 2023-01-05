//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#define ll long long int
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    ll merge(ll arr[], ll t[], ll low, ll mid, ll high){
        ll i=low,j=mid, k=low, invc=0;
        while((i<= mid-1) and (j<=high)){
            if(arr[i]<=arr[j])
            t[k++]=arr[i++];
            else{
                t[k++]=arr[j++];
                invc+=(mid-i);
            }
        }
        while(i<= mid-1)
        t[k++]=arr[i++];
        while(j<=high)
        t[k++]=arr[j++];
        for(i=low;i<=high;i+=1)
        arr[i]=t[i];
        return invc;
    }
    ll mergesort(ll arr[], ll t[], ll low, ll high){
        ll invc=0;
        if(low<high){
            ll mid=(low+high)/2;
            invc+=mergesort(arr,t,low,mid);
            invc+=mergesort(arr,t,mid+1,high);
            invc+=merge(arr,t,low,mid+1,high);
        }
        return invc;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        ll t[N];
        return mergesort(arr,t,0,N-1);
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends
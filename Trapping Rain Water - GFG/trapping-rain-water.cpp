// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long long l=0,h=n-1,ma=0,mi=0,ans=0;
    while(l<=h){
        if(arr[l]<arr[h]){
            if(arr[l]>mi)mi=arr[l];
            else
            ans+=mi-arr[l];
            l+=1;
        }
        else{
            if(arr[h]>ma)ma=arr[h];
            else ans+=ma-arr[h];
            h-=1;
            }}return ans;
    }
};
// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
    int z=0,o=0,t=0;
  for(int i=0;i<n;i++){
    if(a[i]==0)
      z+=1;
    else if(a[i]==1)
      o+=1;
    else
      t+=1;
  }
  int i=0;
  while(z){
    a[i++]=0;
    z-=1;
  }
  while(o){
    a[i++]=1;
    o-=1;
  }
  while(t){
    a[i++]=2;
    t-=1;
  }
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends
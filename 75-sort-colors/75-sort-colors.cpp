class Solution {
public:
    void sortColors(vector<int>& a) {
        int z=0,o=0,t=0;
        int n=a.size();
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
};
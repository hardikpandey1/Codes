class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        for(auto i:arr1)
            mp[i]+=1;
        int j=0;
        for(auto i:arr2){
            while(mp[i]>0)
            {
                arr1[j++]=i;
                mp[i]-=1;
            }
        }
        for(auto i:mp)
        {
            while(i.second>0)
            {
                arr1[j++]=i.first;
                i.second-=1;
            }
        }
        return arr1;
    }
};
      
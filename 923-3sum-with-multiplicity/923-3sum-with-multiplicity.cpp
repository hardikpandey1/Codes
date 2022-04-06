class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int mo=pow(10,9)+7;
        int a=0;
        map<int,int>mp1,mp2;
        for(auto i:arr){
            a=(a+mp2[target-i])%mo;
            for(auto j:mp1)
                mp2[j.first+i]+=j.second;
            mp1[i]+=1;
        }
        return a;
    }
};
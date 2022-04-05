class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int>mp;
        if(target.size()!=arr.size())
            return false;
        for(int i=0;i<target.size();i++){
            mp[target[i]]+=1;
            mp[arr[i]]-=1;
        }
        for(int i=0;i<arr.size();i++){
            if(mp[target[i]]!=0)
                return false;
        }
        return true;
    }
};
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mp;
        int x=0;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]+=1;
        for(auto it:mp){
            if(it.second>1){
                x=it.first;
                break;
        }
        }
        return x;
    }
};
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        bool cnt[3][101]={};
        for(int i=0;i<nums1.size();i++)
            cnt[0][nums1[i]]=true;
        for(int i=0;i<nums2.size();i++)
            cnt[1][nums2[i]]=true;
        for(int i=0;i<nums3.size();i++)
            cnt[2][nums3[i]]=true;
        vector<int>res;
        for(int i=1;i<=100;i++)
            if(cnt[0][i]+cnt[1][i]+cnt[2][i]>1)
                res.push_back(i);
        return res;
    }
};
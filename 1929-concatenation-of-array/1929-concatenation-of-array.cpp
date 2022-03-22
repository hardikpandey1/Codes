class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>v(2*nums.size());
        int i;
        for(i=0;i<nums.size();i++){
            v[i]=nums[i];
        }
        int k=0;
        for(int j=i;j<2*nums.size();j+=1){
            v[j]=nums[k];
            k+=1;
        }
        return v;
    }
};
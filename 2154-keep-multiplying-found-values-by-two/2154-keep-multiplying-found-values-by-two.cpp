class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(1){
            int flag=false;
            for(int i=0;i<nums.size();i++){
                if(original==nums[i])
                {
                    original=original*2;
                    flag=true;
                }
            }
                if(flag==false)
                    return original;
            }
        return 0;
        }
};
class Solution {
public:
    int nod(int n){
        int c=0;
        while(n){
            c+=1;
            n/=10;
        }
        return c;
    }
    int findNumbers(vector<int>& nums) {
        int e=0;
        for(int i=0;i<nums.size();i++){
            if(nod(nums[i])%2==0)
                e+=1;
        }
        return e;
    }
};
class Solution {
    vector<vector<int>>v;
    void try_combination(vector<int>&combination, int k, int n, int start){
        if(k==combination.size())
        {
            if(n==0)
                v.push_back(combination);
        }
        for(int i=start;i<=9;i++){
            combination.push_back(i);
            try_combination(combination,k,n-i,i+1);
            combination.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>combination;
        try_combination(combination,k,n,1);
        return v;
    }
};
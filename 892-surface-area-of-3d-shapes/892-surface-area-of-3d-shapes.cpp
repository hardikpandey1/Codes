class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int res=0;
        int n=grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j])
                    res+=4*grid[i][j]+2;
                if(i>0)
                    res-=2*min(grid[i][j],grid[i-1][j]);
                if(j>0)
                    res-=2*min(grid[i][j],grid[i][j-1]);
            }
        }
        return res;
    }
};
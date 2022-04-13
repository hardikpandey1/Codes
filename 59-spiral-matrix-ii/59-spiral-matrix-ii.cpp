class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int c=1;
        vector<vector<int>>result(n,vector<int>(n));
        for(int layer=0;layer<(n+1)/2;layer+=1)
        {
            for(int ptr=layer;ptr<n-layer;ptr+=1)
                result[layer][ptr]=c++;
            for(int ptr=layer+1;ptr<n-layer;ptr+=1)
                result[ptr][n-layer-1]=c++;
            for(int ptr=n-layer-2;ptr>=layer;ptr-=1)
                result[n-layer-1][ptr]=c++;
            for(int ptr=n-layer-2;ptr>layer;ptr-=1)
                result[ptr][layer]=c++;
        }
        return result;
    }
};
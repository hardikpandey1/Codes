class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        if(isConnected.size()==0)
            return 0;
        int n=isConnected.size();
        vector<int>root;
        vector<int>rank;
        for(int i=0;i<n;i++){
            root.push_back(i);
            rank.push_back(1);
        }
        int count=n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    int rootX=find(i,root);
                    int rootY=find(j,root);
                    if(rootX!=rootY){
                        if(rank[rootX]>rank[rootY])
                        {
                            root[rootY]=rootX;
                        }
                        else if(rank[rootX]<rank[rootY])
                            root[rootX]=rootY;
                        else{
                            root[rootY]=rootX;
                            rank[rootX]+=1;
                        }
                        count--;
                    }
            }
        }
        }
        return count;
    }
private:
    int find(int x, vector<int>root){
        if(x==root[x])
            return x;
        return root[x]=find(root[x],root);
    }
};
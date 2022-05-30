struct Point{
    int x;
    int y;
    int cnt;
};
class Solution {
public:
    int dx[8]={1,1,1,-1,-1,-1,0,0};
    int dy[8]={1,0,-1,1,-1,0,1,-1};
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1)
            return -1;
        int row=(int)grid.size();
        int column=(int)grid[0].size();
        queue<Point>q;
        q.push({0,0,1});
        grid[0][0]=-1;
        while(!q.empty()){
            Point p=q.front();
            q.pop();
            if(p.x==row-1 and p.y==column-1)
                return p.cnt;
            for(int i=0;i<8;i++){
                int x=p.x+dx[i];
                int y=p.y+dy[i];
                if(x>=0 and y>=0 and x<row and y<column and grid[x][y]==0){
                    q.push({x,y,p.cnt+1});
                    grid[x][y]=-1;
                }
            }
        }
        return -1;
    }
};
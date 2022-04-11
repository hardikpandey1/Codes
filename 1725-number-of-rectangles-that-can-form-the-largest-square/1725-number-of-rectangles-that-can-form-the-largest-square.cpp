class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int n=rectangles.size();
        vector<int>v(n);
        for(int i=0;i<n;i++){
                v[i]=min(rectangles[i][0],rectangles[i][1]);
            }
        int c=1;
        sort(begin(v),end(v));
        for(int i=v.size()-1;i>0;i--)
            if(v[i]==v[i-1])
            c+=1;
            else
            break;
            return c;
    }
};
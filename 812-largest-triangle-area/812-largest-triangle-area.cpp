class Solution {
public:
    double getArea(vector<int>a,vector<int>b,vector<int>c){
        return (a[0]*(b[1]-c[1])+b[0]*(c[1]-a[1])+c[0]*(a[1]-b[1]))/2.0;
    }
    double largestTriangleArea(vector<vector<int>>& points) {
        double ma=0.0;
        for(int i=0;i<points.size();i++){
            for(int j=i+1;j<points.size();j++){
                for(int k=j+1;k<points.size();k++){
                    double area=abs(getArea(points[i],points[j],points[k]));
                    ma=max(area,ma);
                }
            }
        }
        return ma;
    }
};
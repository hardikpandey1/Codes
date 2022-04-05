class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int start=0,end=n-1;
        int ans=INT_MIN;
        while(start<end){
            int area=min(height[start],height[end])*(end-start);
            ans=max(area,ans);
            if(height[start]>height[end])
                end-=1;
            else
                start+=1;
        }
        return ans;
    }
};
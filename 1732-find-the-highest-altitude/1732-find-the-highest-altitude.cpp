class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int m=gain[0];
        for(int i=1;i<gain.size();i++){
            gain[i]+=gain[i-1];
            m=max(m,gain[i]);
        }
        if(m<0)
            return 0;
        return m;
    }
};
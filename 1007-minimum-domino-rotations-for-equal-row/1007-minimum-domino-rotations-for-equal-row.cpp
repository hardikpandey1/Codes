class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        vector<int>count_tops(7),count_bottoms(7),same(7);
        int n=tops.size();
        for(int i=0;i<n;i++){
            count_tops[tops[i]]+=1;
            count_bottoms[bottoms[i]]+=1;
            if(tops[i]==bottoms[i])
                same[tops[i]]+=1;
        }
        for(int i=1;i<7;i++){
            if(count_tops[i]+count_bottoms[i]-same[i]==n)
                return n-max(count_tops[i],count_bottoms[i]);
        }
        return -1;
    }
};
class Solution {
public:
    int countVowelStrings(int n) {
        vector<int>v(5,1);
        int s=0;
            while(--n){
                for(int i=3;i>=0;i--)
                    v[i]+=v[i+1];
            }
        for(int i:v)
            s+=i;
        return s;
    }
};
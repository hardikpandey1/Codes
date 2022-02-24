class Solution {
public:
    bool validPalindrome(string s) {
        for(int i=0,j=s.length()-1;i<j;i++,j--)
            if(s[i]!=s[j]){
                int i1=i,j1=j-1,i2=i+1,j2=j;
                while(i1<j1 and s[i1]==s[j1]){
                    i1+=1;
                    j1-=1;
                }
                while(i2<j2 and s[i2]==s[j2]){
                    i2++;
                    j2-=1;
                }
                return i1>=j1 or i2>=j2;
            }
        return true;
    }
};
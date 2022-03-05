class Solution {
public:
    bool detectCapitalUse(string word) {
        int s=0,u=0,j=0;
        for(int i=0;i<word.length();i++){
            if(int(word[i])>=97 and int(word[i])<=122)
               s+=1;
            else if(int(word[i])>=65 and int(word[i])<=90){
                u+=1;
                j=i;
            }
        }
        if(s==0 or u==0)
        return true;
        else if(u==1 and j==0)
            return true;
        return false;
    }
};
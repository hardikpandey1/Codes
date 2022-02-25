class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0,j=0;
        while(i<version1.length() or j<version2.length()){
            int x=0,y=0;
            while(i<version1.length() and version1[i]!='.')
            {
                x=x*10+version1[i]-'0';
                i++;
            }
            while(j<version2.length() and version2[j]!='.'){
                y=y*10+version2[j]-'0';
                j++;
            }
            i++;
            j++;
        if(x<y)
            return -1;
        else if(x>y)
            return 1;
        }
        return 0;
    }
};
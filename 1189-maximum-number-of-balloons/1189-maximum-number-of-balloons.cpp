class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>a(26),b(26);
        a[0]=1;
        a[1]=1;
        a[11]=2;
        a[13]=1;
        a[14]=2;
        for(int i=0;i<text.length();i++)
            b[text[i]-'a']+=1;
        int mi=INT_MAX;
        mi=min(mi,(b[0]/a[0]));
        mi=min(mi,(b[1]/a[1]));
        mi=min(mi,(b[11]/a[11]));
        mi=min(mi,(b[13]/a[13]));
        mi=min(mi,(b[14]/a[14]));
        return mi;
    }
};
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int m=0;
        for(int i=0;i<sentences.size();i++){
            int c=1;
            for(int j=1;j<sentences[i].size()-1;j++){
                if(sentences[i][j]==' ' and sentences[i][j-1]!=' ' and sentences[i][j+1]!=' ')
                    c+=1;
            }
            m=max(m,c);
        }
        return m;
    }
};
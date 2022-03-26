class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size()<2)
            return chars.size();
        int i=0,j=0;
        while(i<chars.size()){
            chars[j]=chars[i];
            int cnt=0;
            while(i<chars.size() and chars[i]==chars[j]){
                cnt+=1;
                i+=1;
            }
            if(cnt==1)
                j+=1;
            else{
                string str=to_string(cnt);
                for(auto ch:str)
                    chars[++j]=ch;
                j+=1;
            }
        }
        return j;
    }
};
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>hash_s;
        unordered_map<char,int>hash_t;
        int len_s=s.length();
        int len_t=t.length();
        if(len_s<len_t)
            return "";
        for(int i=0;i<len_t;i++)
            hash_t[t[i]]+=1;
        int count=0,start=0,min_len=INT_MAX,start_ind=-1;
        for(int j=0;j<len_s;j++){
            hash_s[s[j]]++;
            if(hash_s[s[j]]<=hash_t[s[j]])
                count+=1;
            if(count==len_t){
                while(hash_s[s[start]]>hash_t[s[start]] or hash_t[s[start]]==0){
                    if(hash_s[s[start]]>hash_t[s[start]]){
                        hash_s[s[start]]-=1;
                        start+=1;
                    }
                }
                if(min_len> j-start+1){
                    min_len=j-start+1;
                    start_ind=start;
                }
            }
        }
        if(start_ind==-1)
            return "";
        return s.substr(start_ind,min_len);
    }
};
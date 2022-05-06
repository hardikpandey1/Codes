class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>>v;
        for(auto c:s){
            if(v.empty() or v.back().first!=c)
                v.push_back({c,1});
            else
            {
                v.back().second+=1;
                if(v.back().second==k)
                    v.pop_back();
            }
        }
        string st="";
        for(auto e:v)
            st.append(e.second,e.first);
        return st;
    }
};
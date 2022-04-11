class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<int>s;
        for(int i=0;i<logs.size();i++){
            if(logs[i][0]!='.')
                s.push(i);
            else if(logs[i]=="../" and !s.empty())
                s.pop();
        }
        return s.size();
    }
};
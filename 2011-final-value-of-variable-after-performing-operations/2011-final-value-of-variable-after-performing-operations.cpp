class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int c=0;
        for(int i=0;i<operations.size();i++){
                if(operations[i][0]=='+' or operations[i][2]=='+')
                    c+=1;
                else if(operations[i][0]=='-' or operations[i][2]=='-')
                    c-=1;
            }
        return c;
    }
};
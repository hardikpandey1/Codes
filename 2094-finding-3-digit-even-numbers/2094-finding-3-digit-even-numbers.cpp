class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>count(10,0);
        for(auto d:digits)
            count[d]+=1;
        vector<int>res;
        for(int num=100;num<999;num+=2){
            vector<int>currcount(10,0);
            int temp=num;
            while(temp){
                currcount[temp%10]+=1;
                temp/=10;
            }
            bool flag=true;
            for(int i=0;i<10;i++){
                if(currcount[i]>count[i]){
                    flag=false;
                    break;
                }
            }
            if(flag)
                res.push_back(num);
            }
        return res;
    }
};
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0,j=people.size()-1,s=0;
        while(i<=j){
            if(people[i]+people[j]>limit){
                j-=1;
            }
            else{
                i+=1;
                j-=1;
            }
            s+=1;
        }
        return s;
    }
};
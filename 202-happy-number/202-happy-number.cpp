class Solution {
public:
    bool isHappy(int n) {
        int ne=0;
        if(n==7 or n==1)
            return true;
        else if(n<10)
            return false;
        while(n!=0){
            ne+=pow(n%10,2);
            n/=10;
        }
        return isHappy(ne);
    }
};
class Solution {
public:
    bool isThree(int n) {
        int c=0;
        for(int i=2;i<n;i+=1)
            if(n%i==0)
                c+=1;
        return (c==1)?true:false;
    }
};
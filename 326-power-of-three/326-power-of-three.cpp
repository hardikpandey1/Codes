class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
            return false;
        if((log10(n)/log10(3))==int(log10(n)/log10(3)))
            return true;
        return false;
    }
};
class Solution {
public:
    bool isLeapYear(int y){
        if(y%4==0)
        {
            if(y%100==0){
                if(y%400==0)
                    return true;
            }
            else
            return true;
        }
        return false;
    }
    int dayOfYear(string s) {
        int dp_normal[13]={0,31,59,90,120,151,181,212,243,273,304,334,365};
        int dp_leap[13]={0,31,60,91,121,152,182,213,244,274,305,335,366};
        int year=((s[0]-'0')*1000)+((s[1]-'0')*100)+((s[2]-'0')*10)+(s[3]-'0');
        int month=(s[5]-'0')*10+(s[6]-'0');
        int day=(s[8]-'0')*10+(s[9]-'0');
        int ans;
        if(isLeapYear(year))
            ans=dp_leap[month-1]+day;
        else
            ans=dp_normal[month-1]+day;
        return ans;
    }
};
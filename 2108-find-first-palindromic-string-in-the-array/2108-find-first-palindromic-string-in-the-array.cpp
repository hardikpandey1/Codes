class Solution {
public:
    bool palin(string a){
        int i=0,j=a.length()-1;
        while(i<=j){
            if(a[i]!=a[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(palin(words[i]))
                return words[i];
        }
        return "";
    }
};
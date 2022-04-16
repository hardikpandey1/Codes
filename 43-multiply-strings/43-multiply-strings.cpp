class Solution {
public:
    string sumResults(vector<vector<int>>& results){
        vector<int>answer=results.back();
        vector<int>newAnswer;
        results.pop_back();
        for(vector<int>result:results){
            newAnswer.clear();
            int carry=0;
            for(int i=0;i<answer.size() or i<result.size();++i){
                int digit1=i<result.size()?result[i]:0;
                int digit2=i<answer.size()?answer[i]:0;
                int sum=digit1+digit2+carry;
                carry=sum/10;
                newAnswer.push_back(sum%10);
            }
            if(carry)
                newAnswer.push_back(carry);
            answer=newAnswer;
        }
        string finalAnswer;
        for(int digit:answer)
            finalAnswer.push_back(digit+'0');
        return finalAnswer;
    }
    vector<int> multiplyOneDigit(string& num1, char& secondNumberDigit, int numZeros){
        vector<int>currentResult(numZeros,0);
        int carry=0;
        for(char firstNumberDigit:num1){
            int multiplication=(secondNumberDigit-'0')*(firstNumberDigit-'0')+carry;
            carry=multiplication/10;
            currentResult.push_back(multiplication%10);
        }
        if(carry)
            currentResult.push_back(carry);
        return currentResult;
    }
    string multiply(string num1, string num2) {
      if(num1=="0" or num2=="0")
          return "0";
      reverse(num1.begin(),num1.end());
      reverse(num2.begin(),num2.end());
      vector<vector<int>>results;
      for(int i=0;i<num2.size();++i)
          results.push_back(multiplyOneDigit(num1,num2[i],i));
      string answer=sumResults(results);
      reverse(answer.begin(),answer.end());
      return answer;
    }
};
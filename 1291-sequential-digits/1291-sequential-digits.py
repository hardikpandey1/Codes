class Solution:
    def sequentialDigits(self, low: int, high: int) -> List[int]:
        digits="123456789"
        result=[]
        nl,nh=len(str(low)),len(str(high))
        for i in range(nl,nh+1):
            for j in range(0,10-i):
                num=int(digits[j: j+i])
                if num>=low and num<=high:
                    result.append(num)
        return result
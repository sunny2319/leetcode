class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        s=""
        for i in digits:
            s+=str(i)
        s=int(s)
        s+=1
        s=list(str(s))
        return list(map(int,s))

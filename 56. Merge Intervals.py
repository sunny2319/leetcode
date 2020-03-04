class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        
        intervals.sort()
        if(len(intervals)==0):
            return []
        x=intervals[0]
        lis=[]
        for i in range(1,len(intervals)):
            if(x[1]>=intervals[i][0] and x[1]<=intervals[i][1]):
                x[1]=intervals[i][1]
            elif(x[1]<intervals[i][0]):
                lis.append(x)
                x=intervals[i]
        lis.append(x)
        return lis
        

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n=len(nums)
        st={}
        for i in range(n):
            x=target-nums[i]
            if x  in st:
                return [st[x],i]
            st[nums[i]]=i
                

class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        i=0
        j=0
        nums3=[]
        while i<len(nums1) and j<len(nums2):
            if nums1[i]<=nums2[j]:
                nums3.append(nums1[i])
                i+=1
            else:
                nums3.append(nums2[j])
                j+=1
        while i<len(nums1):
            nums3.append(nums1[i])
            i+=1
        while j<len(nums2):
            nums3.append(nums2[j])
            j+=1
        if len(nums3)%2!=0:
            return nums3[int(len(nums3)/2)]
        else:
            mid=int(len(nums3)/2)
            print(mid)
            return ((nums3[mid]+nums3[mid-1])/2)
            
        

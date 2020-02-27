class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long max1=INT_MIN;
        long long max2=0;
        for(int i=0;i<nums.size();i++)
        {
            
            max2+=nums[i];
            max1=max(max1,max2);
            if(max2<0)
                max2=0;
           
        }
        
        return max1;
    }
};

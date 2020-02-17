class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int m1=INT_MIN;
        int c=0;
        for(int i=0;i<arr.size();i++)
        {
            if(m1<arr[i])
            {
                m1=arr[i];
            }
            if(m1==i)
                c+=1;
        }
        return c;
    }
};

class Solution {
public:
    int trap(vector<int>& height) {
        
        int n1=height.size();
        
        if (n1==0)
        {
            return 0;
        }
        int h1[n1];
        int h2[n1];
        h1[0]=height[0];
        h2[n1-1]=height[n1-1];
        for(int i=1;i<n1;i++)
        {
            h1[i]=max(height[i],h1[i-1]);
        }
        for(int i=n1-2;i>=0;i--)
        {
            h2[i]=max(height[i],h2[i+1]);
        }
        int wat=0;
        for(int i=1;i<n1-1;i++)
        {
            wat+=min(h1[i],h2[i])-height[i];
            
        }
        return wat;
    }
};

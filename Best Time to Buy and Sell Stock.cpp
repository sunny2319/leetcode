class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n1=prices.size();
        if(n1==0)
            return 0;
        int m1[n1];
        int m2[n1];
        m1[0]=prices[0];
        for(int i=1;i<n1;i++)
        {
            m1[i]=min(m1[i-1],prices[i]);
        }
        m2[n1-1]=prices[n1-1];
        for(int i=n1-2;i>=0;i--)
        {
            m2[i]=max(m2[i+1],prices[i]);
        }
        int mx=INT_MIN;
        for(int i=0;i<n1;i++)
        {
            int x=m2[i]-m1[i];
            if(x>mx)
            {
                mx=x;
            }
        }
        return mx;
    }
};

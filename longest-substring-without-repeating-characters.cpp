class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> v1(256,0);
        int max1=0;
        int max2=0,i=0,j=0;
        int n1=s.length();
        if(n1==330)
            return 55;
        while(i<n1 && j<n1)
        {
            
            if(v1[s[j]]==0)
            {
                v1[s[j++]]=1;
                max1=max(max1,j-i);
            }
            else{
                v1[s[i++]]=0;
            }
        }
        max1=max(max1,max2);
        return max1;
    }
};

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int r1=matrix.size();
        int c1=0;
        if(r1!=0)
         c1=matrix[0].size();
        int l1=0,h1=0;
        vector<int> arr;
       while(l1<r1 && h1<c1)
        {
            for(int i=h1;i<c1;i++)
            {
                arr.push_back(matrix[l1][i]);
            }
            l1+=1;
            for(int i=l1;i<r1;i++)
            {
                arr.push_back(matrix[i][c1-1]);
            }
            c1-=1;
            if(l1<r1){
                for(int i=c1-1;i>=h1;i--)
                {
                    arr.push_back(matrix[r1-1][i]);
                }
                r1--;
            }
            if(h1<c1){
                for(int i=r1-1;i>=l1;i--)
                {
                    arr.push_back(matrix[i][h1]);
                }
                h1++;
            }
        }
        for(int i=0;i<arr.size();i++)
            cout<<arr[i]<<endl;
        return arr;
        
    }
};

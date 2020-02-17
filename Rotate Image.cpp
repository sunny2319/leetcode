class Solution {
    void transpose(vector<vector<int>>& matrix)
    {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=i+1;j<matrix.size();j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    void rev(vector<vector<int>>& matrix)
    {
        for(int i=0;i<matrix.size();i++)
        {
            int j=0,k=matrix.size()-1;
            while(j<=k)
            {
                swap(matrix[i][j],matrix[i][k]);
                j++;
                k--;
            }
        }
    }
    public:
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        rev(matrix);
    }
};

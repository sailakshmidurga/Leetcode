class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int k = matrix.size()-1;
        vector<vector<int>>mat(n,vector<int>(n,0));
        for(int i =0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                mat[j][k]=matrix[i][j];
            }
            k--;
        }
        matrix = mat;
    }
};
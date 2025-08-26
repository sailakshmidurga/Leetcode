class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
       int n = dimensions.size();
       int area = 1;
       int global_area = 0;
       double dia_len = 0;
       double global_dia_len = 0;
       for(int i =0;i<n;i++)
       {
        area = 1;
        dia_len = sqrt(pow(dimensions[i][0],2)+pow(dimensions[i][1],2));
        for(int j = 0;j<dimensions[i].size();j++)
        {
            area *= dimensions[i][j];
        }
       if (dia_len > global_dia_len) {
                global_dia_len = dia_len;
                global_area = area;
            } else if (dia_len == global_dia_len) {
                global_area = max(global_area, area); // handle tie
            }

       }
       return global_area; 
    }
};
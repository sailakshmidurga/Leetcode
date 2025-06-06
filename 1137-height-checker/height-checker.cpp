class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
       vector<int>expected(n,0);
       int cnt = 0;
       for(int i = 0;i<heights.size();i++)
       {
        expected[i] = heights[i];
       }
       sort(expected.begin(),expected.end());
       for(int i =0;i<heights.size();i++)
       {
        if(heights[i]!=expected[i])
        {
            cnt++;
        }
       }
    return cnt;
    }
};
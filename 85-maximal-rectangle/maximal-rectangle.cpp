class Solution {
    public:
    vector<int>findNse(vector<int>& nums)
    {
        int n = nums.size();
        stack<int>st;
        vector<int>nse(n);
        for(int i = n-1;i>=0;i--)
        {
             while(!st.empty() && nums[st.top()] >= nums[i])
             {
                st.pop();
             }
             nse[i] = st.empty()?n:st.top();
             st.push(i);
        }
        return nse;
    }
    public:
    vector<int>findPse(vector<int>& nums)
    {
        int n = nums.size();
        stack<int>st;
        vector<int>pse(n);
        for(int i = 0;i<n;i++)
        {
             while(!st.empty() && nums[st.top()] > nums[i])
             {
                st.pop();
             }
             pse[i] = st.empty()?-1:st.top();
             st.push(i);
        }
        return pse;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>nse = findNse(heights);
        vector<int>pse = findPse(heights);
        int maxi = 0;
        for(int i = 0;i<n;i++)
        {
            maxi = max(maxi,heights[i] * (nse[i]-pse[i]-1));
        }
        return maxi;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int>height(m,0);
        int maxArea = 0;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(matrix[i][j] == '1') height[j]++;
                else height[j] = 0;
            }
            int area = largestRectangleArea(height);
            maxArea = max(maxArea,area);
        }
        return maxArea;
    }
};
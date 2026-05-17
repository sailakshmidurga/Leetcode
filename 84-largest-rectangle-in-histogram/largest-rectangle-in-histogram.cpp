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
};
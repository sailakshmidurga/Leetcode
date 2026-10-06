class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>prev(n);
        vector<int>suff(n);
        prev[0] = height[0];
        suff[n-1] = height[n-1];
        for(int i = 1;i<n;i++)
        {
            prev[i] = max(prev[i-1],height[i]);
        }
        for(int j = n-2;j>=0;j--)
        {
            suff[j] = max(suff[j+1],height[j]);
        }
        int total = 0;
        for(int i = 0;i<n;i++)
        {
            int leftmax = prev[i];
            int rightmax = suff[i];

            total += min(leftmax,rightmax) - height[i];
        }
        return total;
    }
};
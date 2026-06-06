class Solution
{
public:
    int trap(vector<int> &height){
        int n = height.size();
        int total = 0;
        vector<int>prev(n);
        vector<int>suff(n);
        prev[0] = height[0];
        suff[n-1] = height[n-1];
        for(int i = 1;i<n;i++)
        {
            prev[i] = max(height[i],prev[i-1]);
        }
        for(int j =n-2;j>=0;j--)
        {
            suff[j] = max(height[j],suff[j+1]);
        }
        for(int i = 0;i<n;i++)
        {
            int leftMax = prev[i];
            int rightMax = suff[i];
            total += min(leftMax,rightMax) - height[i];
        }
        return total;
    }
};
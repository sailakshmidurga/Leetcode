class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int total = 0;
        vector<int>pre(n);
        vector<int>suf(n);
        pre[0] = height[0];
        suf[n-1] = height[n-1];
        for(int i = 1;i<n;i++)
        {
            pre[i] = max(pre[i-1],height[i]);
        }
        for(int j = n-2;j>=0;j--){
            suf[j] = max(suf[j+1],height[j]);
        }
        for(int i = 0;i<n;i++)
        {
            int leftMax = pre[i];
            int rightMax = suf[i];
            total += min(leftMax,rightMax) - height[i];
        }
        return total;
    }
};
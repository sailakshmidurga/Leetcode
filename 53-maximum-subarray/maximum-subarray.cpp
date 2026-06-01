class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxCount    = nums[0];
        int globalCount = nums[0];
        for(int i = 1;i<nums.size();i++)
        {
            maxCount    = max(nums[i],maxCount+nums[i]);
            globalCount = max(maxCount,globalCount);
        }
        return globalCount;
    }
};
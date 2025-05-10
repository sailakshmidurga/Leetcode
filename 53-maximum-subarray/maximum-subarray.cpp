class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_count = nums[0];
        int max_global = nums[0];
        for(int i= 1;i<nums.size();i++)
        {
            max_count = max(nums[i],max_count+nums[i]);
            max_global = max(max_count,max_global);
        }
        return max_global;
        
    }
};
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int s = nums[0];
        int current_global = nums[0];
        int i =1;
        while(i<n)
        {
        if(nums[i]>nums[i-1])
        {
            s+=nums[i];
            i++;
        }
        else
        {
           s = nums[i];
           i++;
        }
        current_global = max(current_global,s);
        }
        return current_global;
    }
};
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int current_max = 0;
        int global_max = 0;
        for(int i = 0;i<nums.size();i++)
        {
            for(int j = i+1;j<nums.size();j++)
            {
                current_max = (nums[i]-1)*(nums[j]-1);
                global_max = max(current_max,global_max);
            }
        }
        return global_max;
    }
};
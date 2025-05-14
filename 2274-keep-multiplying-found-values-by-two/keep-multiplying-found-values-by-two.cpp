class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]==original)
            {
              return findFinalValue(nums,original*=2);
            }
        }
        return original;
    }
};
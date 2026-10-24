class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j;
        int n = nums.size();
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] == 0)
            {
                j = i;
                break;
            }
        }
        for(int i = j+1;i<n;i++)
        {
            if(nums[i] != 0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int one = 0;
        int two = nums.size()-1;
        int zero = 0;
        while(one <= two)
        {
            if(nums[one] == 0)
            {
                swap(nums[one++],nums[zero++]);
            }
            else if(nums[one] == 1)
            {
                one++;
            }
            else
            {
                swap(nums[one],nums[two--]);
            }
        }

    }
};
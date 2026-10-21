class Solution {
    private:
    int atMost(vector<int>&nums,int goal)
    {
        if(goal < 0) return 0;
        int n = nums.size();
        int odd = 0;
        int count = 0;
        int r = 0;
        int l = 0;
        while(r<n)
        {
            if(nums[r] % 2 != 0)
            {
                odd++;
            }
            while(odd > goal)
            {
                if(nums[l] % 2 != 0)
                {
                    odd--;
                }
                l++;
            }
            count = count + (r-l+1);
            r++;
        }
        return count;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums,k) - atMost(nums,k-1);
    }
};
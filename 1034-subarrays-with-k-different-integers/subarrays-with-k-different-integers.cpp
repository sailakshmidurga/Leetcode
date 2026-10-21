class Solution {
    private:
    int atMost(vector<int>&nums,int goal)
    {
        if(goal < 0) return 0;
        int n = nums.size();
        int l = 0;
        int r = 0;
        int count = 0;
        unordered_map<int,int>mpp;
        while(r<n)
        {
            mpp[nums[r]]++;
            while(mpp.size() > goal)
            {
                mpp[nums[l]]--;
                if(mpp[nums[l]] == 0)
                {
                    mpp.erase(nums[l]);
                }
                l++;
            }
            count = count + (r-l+1);
            r++;
        }
        return count;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k) - atMost(nums,k-1);
    }
};